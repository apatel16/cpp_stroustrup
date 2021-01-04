
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int convert_to_digit(string operand){
    if (operand == "1" || operand == "one"){
        return 1;
    }

    if (operand == "2" || operand == "two"){
        return 2;
    }

    if (operand == "3" || operand == "three"){
        return 3;
    }

    if (operand == "4" || operand == "four"){
        return 4;
    }

    if (operand == "5" || operand == "five"){
        return 5;
    }

    if (operand == "6" || operand == "six"){
        return 6;
    }

    if (operand == "7" || operand == "seven"){
        return 7;
    }

    if (operand == "8" || operand == "eight"){
        return 8;
    }

    if (operand == "9" || operand == "nine"){
        return 9;
    }
    return -1;
}

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
            cout<<"The sum of "<<operand1<<" and "<<operand2<<" is: "<<convert_to_digit(operand1) + convert_to_digit(operand2)<<endl;
            break;
        case '-':
            if(operand1 > operand2){
                cout<<"The subtraction of "<<operand1<<" and "<<operand2<<" is: "<<convert_to_digit(operand1) - convert_to_digit(operand2)<<endl;
            }else{
                cout<<"The subtraction of "<<operand2<<" and "<<operand1<<" is: "<<convert_to_digit(operand2) - convert_to_digit(operand1)<<endl;
            }
            break;
        case '/':
            if(operand1 > operand2){
                cout<<"The division of "<<operand1<<" and "<<operand2<<" is: "<<convert_to_digit(operand1) / convert_to_digit(operand2)<<endl;
            }else{
                cout<<"The division of "<<operand2<<" and "<<operand1<<" is: "<<convert_to_digit(operand2) / convert_to_digit(operand1)<<endl;
            }
            break;
        case '*':
            cout<<"The multiplication of "<<operand1<<" and "<<operand2<<" is: "<<convert_to_digit(operand1) * convert_to_digit(operand2)<<endl;
            break;
    }

    return(0);
}
