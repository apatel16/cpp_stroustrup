#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main(){

    int number_of_words = 0;
    string previous = "";
    string current;

    while(cin>>current){
        ++number_of_words;
        if(current == previous){
            cout<< "Word number "<<number_of_words
                <<" repeated word: "<<current<<endl;
        }
        previous = current;
    }
    return(0);
}