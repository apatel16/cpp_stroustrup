#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(int argc, char* argv[]){

    double number1, number2;

    while(cin>>number1>>number2){
        if (number1 > number2){
            cout<<"Smaller value is: "<<number2;
            cout<<" and Larger value is: "<<number1<<endl;
            
            if((number1-number2) <= 1.0/10000000){
                cout<<"Numbers are almost equal"<<endl;
            }
        }
        else if (number1 < number2) {   
           cout<<"Smaller value is: "<<number1;
           cout<<" and Larger value is: "<<number2<<endl;

            if((number2-number1) <= 1.0/10000000){
                cout<<"Numbers are almost equal"<<endl;
            }
        }else{
            cout<<"Numbers are exactly equal"<<endl;
        }
    }
    return(0);
}