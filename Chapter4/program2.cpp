#include<iostream>
using namespace std;

int main(int argc, char* argv[]){

    char small_case = 97;
    char upper_case = 65;
    int num_small_case = 0;
    int num_upper_case = 0;

    for(int i=0; i<26; i++, small_case++, upper_case++){
        num_small_case = small_case;
        num_upper_case = upper_case;
        cout<<small_case<<"  "<<num_small_case<<"---"<<upper_case<<" "<<num_upper_case<<endl;
    }

    return(0);
}