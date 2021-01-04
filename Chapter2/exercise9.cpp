#include<iostream>
#include<string>

using namespace std;

int main(){

    string num;

    cout<<"Enter number:"<<endl;
    while(cin>>num){
        if((num == "one") || (num == "One") || (num == "ONE")){
            cout<<"1";
        }
        else if((num == "two") || (num == "Two") || (num == "TWO")){
            cout<<"2";
        }
        else if((num == "three") || (num == "Three") || (num == "THREE")){
            cout<<"3";
        }
        else if((num == "four") || (num == "Four") || (num == "FOUR")){
            cout<<"4";
        }else{
            cout<<"No such a number. Try (One, Two, Three, Four)."<<endl;
        }
        if(num == "q"){
            break;
        }
    }

    return 0;
}
