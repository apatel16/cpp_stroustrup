#include<iostream>
#include<string>

using namespace std;

int main(){

    string num1, num2, num3;
    string temp;

    cout<<"Enter three numbers"<<endl;
    cin>>num1>>num2>>num3;

    if(num2 < num1){
        temp = num2;
        num2 = num1;
        num1 = temp;
    }
    if(num3 < num2){
        temp = num2;
        num2 = num3;
        num3 = temp;
    }
    if(num2 < num1){
        temp = num2;
        num2 = num1;
        num1 = temp;
    }

    cout<<num1<<","<<num2<<","<<num3<<endl;

    return 0;
}
