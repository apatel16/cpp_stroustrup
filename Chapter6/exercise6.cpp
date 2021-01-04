#include"std_lib_facilities.h"
using namespace std;

// Faults in program
// 1. Scalability - Not used datastructure to store words
// 2. Do not handle sentence end correctly.
// 3. Might have other bugs.

string read_word()
{
    string word;
    cin>>word;

    if (word == "and" || word == "or" || word == "but"){
        return "conjunction";
    }
    else if (word == "birds" || word == "fish" || word == "c++"){
        return "noun";
    }
    else if (word == "rules" || word == "fly" || word == "swim"){
        return "verb";
    }
    else if(word == "the"){
        return "article";
    }
    else if(word == "."){
        return ".";
    }
    else{
        return "Error";
    }
}


bool sentence(){

    while(true){
        string word = read_word();
        if (word == "noun"){
            string verb = read_word();
            if (verb == "verb"){
                string word2 = read_word();
                if(word2 == "conjunction"){
                    continue;
                }
                if(word2 == "."){
                    return true;
                }
                return false;
            }else{
                return false;
            }
        }
        else if(word == "article"){
            continue;
        }
        else{
            return false;
        }
    }
    return false;
}


int main(){

    cout<<"============ Welcome to sentence checker ==============="<<endl;
    cout<<"============================================================"<<endl;
    
    try{
        string word;
        bool check = false;

        while(cin){
            
            check = sentence();

            if (check){
                cout<<"OK"<<endl;
                break;
            }else{
                cout<<"Not OK"<<endl;
                break;
            }
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
   