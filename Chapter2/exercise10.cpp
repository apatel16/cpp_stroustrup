#include<iostream>
#include<string>

using namespace std;

int main(){

    double number1 = 0;
    double number2 = 0;
    char operation;

    cout<<"Enter operation:"<<endl;
    cin>>operation>>number1>>number2;

    if (operation == '+'){
        cout<<"Addition is "<<number1+number2;
    }
    else if (operation == '*'){
        cout<<"Multiplication is "<<number1*number2;
    }
    else if (operation == '-'){
        if (number2 > number1){
            cout<<"Subtraction is "<<number2-number1;
        }else{
            cout<<"Subtraction is "<<number1-number2;
        }
    }
    else if (operation == '/'){
        cout<<"Division is "<<number2/number1;
    }
    else if (operation == '%'){
        cout<<"Modulus is "<<((int)number1 % (int)number2);
    }else{
        cout<<"Incorrect operation specified. Exiting...";
    }

    return 0;
}
