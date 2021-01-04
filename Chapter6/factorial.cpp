#include<iostream>
using namespace std;

double factorial(double number){
    if(number == 0){
        return 1;
    }

    return number * factorial(number - 1);
}


int main()
{
    double number=4.0;
    cout<<factorial(number)<<endl;
    return 0;    
}