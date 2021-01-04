#include"std_lib_facilities.h"
using namespace std;


class Name_Value {
public:
    string name;
    int score;
    
    Name_Value()
    {
        // code
    }

    Name_Value(string nm, int num): name(nm), score(num)
    {
        // code
    }
};


int main(){

    try{
        vector<Name_Value> grades;
        int num;
        string temp;

        while(cin>>temp>>num){
            for(int i=0; i<grades.size(); i++){
                if(temp == grades[i].name){
                    cout<<"Name is entered twice. Exiting ..."<<endl;
                    exit(0);
                }
            }
            grades.push_back(Name_Value(temp, num));
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

