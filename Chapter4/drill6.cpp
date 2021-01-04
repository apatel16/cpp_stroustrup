#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(int argc, char* argv[]){

    double number;
    double max = -999999999, min=9999999999;

    while(cin>>number){
        if (number > max){
            max = number;
            cout<<number<<" is largest so far seen."<<endl;
        }
        else if (number < min) {   
            min = number;
            cout<<number<<" is smallest so far seen. "<<endl;
        }
    }
    return(0);
}