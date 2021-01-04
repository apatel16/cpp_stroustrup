#include"std_lib_facilities.h"
using namespace std;


const char number = '8'; // t.kind == number means that t is a number Token
const char quit = 'q';   // t.kind == quit means that t is quit Tokem
const char print = ';';  // t.kind == print means that t is print Token
const string prompt = ">"; 
const string result = "="; // used to indicate that what follows is a result 
const char name = 'a';     // name token
const char let = 'L';      //declaration token
const string declkey="let"; // declaration keyword

class Token {
public:
    char kind;
    double value;
    string name;
    
    Token(char ch): kind(ch), value(0)
    {
        // code
    }

    Token(char ch, double val): kind(ch), value(val)
    {
        // code
    }

    Token(char ch, string n): kind(ch), name(n)
    {
        // code
    }
};

class Token_stream{
public:
    // user interface
    Token_stream();             // make a Token_stream that reads from cin
    Token get();                // get a Token
    void putback(Token t);      // put a Token back
    void ignore(char c);        // discard characters up to and including c
private:
    // implementation details
    // (not directly accessible to users of Token)
    bool full;
    Token buffer;
};

class Variable{
public:
    string name;
    double value;
    Variable (string n, double v): name(n), value(v){
        //
    }
};

// constructor
Token_stream::Token_stream(): full(false), buffer(0)
{    
}

void Token_stream::putback(Token t){
    if (full) error("puback() into a full buffer.");
    buffer = t;
    full = true;
}

Token Token_stream::get(){
    // read characters from cin and compose a Token

    if(full){           // check if we already have a Token ready
        full = false;
        return buffer;
    }
    
    char ch;
    cin >> ch;          // note that >> skips whitespace  (space, newline, tab etc).

    switch(ch){
        case print:
        case quit:
        case '(':
        case ')':
        case '+':
        case '-':
        case '*':
        case '/':
        case '%':
        case '=':
            return Token(ch);  // let each character represent itself

        case '.':              // a floatinf point literal can start with .
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':              // numeric literal
        {
            cin.putback(ch);   // put digit back into the input stream
            double val;
            cin >> val;        // read a floating-point number
            return Token(number, val);
        }
        default:
            if(isalpha(ch)){
                string s;
                s += ch;
                while(cin.get(ch) && (isalpha(ch) || isdigit(ch))){
                    s += ch;
                }
                cin.putback(ch);
                if (s == declkey){
                    return Token(let);
                }
                return Token(name, s);
            }
            error("Bad Token");
    }
}

void Token_stream::ignore(char c){
    if (full && c==buffer.kind){
        full = false;
        return;
    }
    full = false;

    // now search input
    char ch = 0;
    while(cin >> ch){
        if (ch == c){
            return;
        }
    }
}

Token_stream ts;
vector<Variable> var_table;
double expression();


double get_value(string s){
    // return the value of the Variable names s

    for(int i=0; i<var_table.size(); i++){
        if (var_table[i].name == s){
            return var_table[i].value;
        }
    }
    error("get: undefined variable", s);
}

void set_value(string s, double d){
    // set variable named s to d

    for(int i=0; i<var_table.size(); i++){
        if(var_table[i].name == s){
            var_table[i].value = d;
            return;
        }
    }
    error("set: undefined variable", s);
}


double primary(){
    Token t = ts.get();
    switch(t.kind){
        case '(':
        {
            double d = expression();
            t = ts.get();
            if(t.kind != ')') error("')' expected." );
            return d;
        }
        case number:
            return t.value;
        case '-':
            return - primary();
        case '+':
            return primary();
        case 'a':
            return get_value(t.name);
        default:
            error("primary expected.");
    }
}


double term(){
    double left = primary();
    Token t = ts.get();
    while(true){
        switch(t.kind){
            case '*':
                left *= primary();
                t = ts.get();
                break;

            case '/':
            {
                double d = primary();
                if(d == 0) error("divide by zero");
                left /= d;
                t = ts.get();
                break;
            }
            case '%':
            {
                double d = term();
                int i1 = int(left);
                if (i1 != left) error("left-hand operand of % not int");
                int i2 = int(d);
                if(i2 != d) error("right-hand operand of % not int");
                if(i2 == 0) error("%: divide by zero");
                left = i1 % i2;
                t = ts.get();
                break;
            }
            default:
                ts.putback(t);
                return left;
        }
    }
}

double expression(){

    double left = term();
    Token t = ts.get();
    while(true){
        switch(t.kind){
            case '+':
                left += term();
                t = ts.get();
                break;
            case '-':
                left -= term();
                t = ts.get();
                break;
            default:
                ts.putback(t);
                return left;
        }
    }
}

bool is_declared(string var){
    // is var already in var_table
    for(int i=0; i<var_table.size(); i++){
        if (var_table[i].name == var){
            return true;
        }
    }
    return false;
}

double define_name(string var, double val){
    // add(var, val) to var_table
    if(is_declared(var)){
        error(var, "declared twice");
    }
    var_table.push_back(Variable(var, val));
    return val;
}

void clean_up_mess(){
    ts.ignore(print);
}

double declaration(){
    // assume we have seen "let"
    // handle: name = expression
    // declare a variable called name with the initial value expression

    Token t = ts.get();
    if(t.kind != name){
        error("name expected in declaration");
    }
    string var_name = t.name;

    Token t2 = ts.get();
    if (t2.kind != '='){
        error ("= missing in declaration of ,", var_name);
    }

    double d = expression();
    define_name(var_name, d);
    return d;
}

double statement(){
    Token t = ts.get();
    switch(t.kind){
        case let:
            return declaration();
        default:
            ts.putback(t);
            return expression();
    }
}

void calculate(){
    while(cin){
        try{
            cout<<prompt;
            Token t = ts.get();

            while(t.kind == print) t=ts.get();     // first discard all "prints"
            if(t.kind == quit){                    // quit
                return;
            }
            ts.putback(t);
            cout<<result<<statement()<<endl;
        }
        catch(exception& e){
            cerr<<e.what()<<endl;
            clean_up_mess();
        }
    }
}

int main(){

    cout<<"============ Welcome to our simple calculator =============="<<endl;
    cout<<"== Usage: expression operator expression; "<<endl;
    cout<<"== Example: 5+3*3;  This will result in =14"<<endl;
    cout<<"== Note: Please enter expressions using floating-point numbers."<<endl;
    cout<<"============================================================"<<endl;
    
    try{
        // predefined names;
        define_name("pi", 3.1415926535);
        define_name("e", 2.7182818284);
        define_name("k", 1000.00);

        calculate();
        keep_window_open();

        return 0;
    }
    catch(exception &e){
        cerr<< e.what() <<endl;
        keep_window_open("~~");
        return 1;
    }
    catch(...){
        cerr<< "exception \n"<<endl;
        keep_window_open("~~");
        return 2;
    }

    return 0;
}
