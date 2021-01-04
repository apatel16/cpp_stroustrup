#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main(){

    string previous = "";
    string current;

    while(cin>>current){
        if(current == previous){
            cout<<"repeated word: "<<current<<endl;
        }
        previous = current;
    }
    return(0);
}