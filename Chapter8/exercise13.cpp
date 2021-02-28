#include"std_lib_facilities.h"

void print_until_s(const vector<string> &v, const string quit){
    int occurance = 0;
    for(int i=0; i<v.size(); i++){
        if(v[i]==quit){
            occurance += 1;
            if (occurance == 2){
                return;
            }
        }
        cout<<v[i]<<'\n';
    }
}

int main(void){
    try{
        vector<string> names{"Goa","quit","Maharashtra", "Gujrat", "quit", "TamilNadu", "Punjab"};
        print_until_s(names, "quit");
    }
    catch (exception& e){
        cerr << "exception: "<<e.what() <<endl;
    }
    catch(...){
        cerr << "exception\n";
    }
        return(EXIT_SUCCESS);
}
