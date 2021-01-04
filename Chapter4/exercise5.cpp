
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int main(int argc, char* argv[])
{
    string operand1;
    string operand2;
    char operation;

    cout<<"Enter the first number: ";
    cin>>operand1;

    cout<<"Enter the second number: ";
    cin>>operand2;
    

    cout<<"What operation do you want to perform? (+, -, /, *)";
    cin>>operation;

    switch(operation){
        case '+':
            cout<<"The sum of "<<operand1<<" and "<<operand2<<" is: "<<operand1 + operand2<<endl;
            break;
        case '-':
            if(operand1 > operand2){
                cout<<"The subtraction of "<<operand1<<" and "<<operand2<<" is: "<<operand1 - operand2<<endl;
            }else{
                cout<<"The subtraction of "<<operand2<<" and "<<operand1<<" is: "<<operand2 - operand1<<endl;
            }
            break;
        case '/':
            if(operand1 > operand2){
                cout<<"The division of "<<operand1<<" and "<<operand2<<" is: "<<operand1 / operand2<<endl;
            }else{
                cout<<"The division of "<<operand2<<" and "<<operand1<<" is: "<<operand2 / operand1<<endl;
            }
            break;
        case '*':
            cout<<"The multiplication of "<<operand1<<" and "<<operand2<<" is: "<<operand1 * operand2<<endl;
            break;
    }

    return(0);
}
