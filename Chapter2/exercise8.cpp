#include<iostream>
#include<string>

using namespace std;

int main(){

    int num1;

    cout<<"Enter number:"<<endl;
    cin>>num1;

    if(num1 % 2 == 0){
        cout<<num1<<" is a even number."<<endl;
    }else{
        cout<<num1<<" is a odd number."<<endl;
    }

    return 0;
}
