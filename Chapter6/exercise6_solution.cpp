#include"std_lib_facilities.h"
using namespace std;

vector<string> nouns;
vector<string> verbs;
vector<string> conjunctions;

void init(){
    nouns.push_back("birds");
    nouns.push_back("fish");
    nouns.push_back("C++");

    verbs.push_back("rules");
    verbs.push_back("fly");
    verbs.push_back("swim");

    conjunctions.push_back("and");
    conjunctions.push_back("or");
    conjunctions.push_back("but");
    
}

bool is_noun(string w){
    for(int i=0; i<nouns.size(); i++){
        if(w == nouns[i]){
            return true;
        }
    }
    return false;
}

bool is_verb(string w){
    for(int i=0; i<verbs.size(); i++){
        if(w == verbs[i]){
            return true;
        }
    }
    return false;
}


bool is_conjuction(string w){
    for(int i=0; i<conjunctions.size(); i++){
        if(w == conjunctions[i]){
            return true;
        }
    }
    return false;
}

bool sentence(){
    string w;
    cin>>w;
    if(!is_noun(w)){
        return false;
    }

    string w1;
    cin>>w1;
    if(!is_verb(w1)){
        return false;
    }

    string w2;
    cin>>w2;
    if(w2 == ".") {
        return true;
    }
    if(!is_conjuction(w2)){
        return false;
    }
    return sentence();
}


int main(){

    cout<<"============ Welcome to sentence checker ==============="<<endl;
    cout<<"============================================================"<<endl;
    
    try{
        init();
        while(cin){
            
            bool check = sentence();

            if (check){
                cout<<"OK\n";
            }else{
                cout<<"Not OK\n";
            }
            cout<<"Try Again:";
        }
        keep_window_open();
    }
    catch(exception &e){
        cerr<< e.what() <<endl;
        keep_window_open();
        return 1;
    }
    catch(...){
        cerr<< "exception \n"<<endl;
        keep_window_open();
        return 2;
    }

    return 0;
}
   