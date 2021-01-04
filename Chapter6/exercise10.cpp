
// Bulls and Cows

#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<exception>

using namespace std;

int factorial(int number){
    if (number == 0){
        return 1;
    }
    return number * factorial(number - 1);
}


int permutation(int a, int b){
    if (a < b || a < 0 || b < 0){
        cout<<"Error: Enter a <= b <= 0"<<endl;
        return 0;
    }
    int numerator = factorial(a);
    int denominator = factorial(a - b);

    return numerator / denominator;
}


int combination(int a, int b){
    if (a < b || a < 0 || b < 0){
        cout<<"Error: Enter a <= b <= 0"<<endl;
        return 0;
    }
    int numerator = permutation(a, b);
    int denominator = factorial(b);

    return numerator / denominator;
}


int main()
{
    int a, b;
    char ch;
    int result = 0;

    cout<<"Do you want to perform permutation / combinations?"<<endl;
    cout<<"Enter p for permutation and c for combination."<<endl;
    cin>>ch;

    cout<<"Enter a and b"<<endl;
    cin>>a>>b;

    switch(ch){
        case 'p':
            result = permutation(a, b);
            if(result == 0){
                cout<<"Exiting..."<<endl;
                return 0;
            }
            cout<<"Permutation of the numbers "<<a<<" and "<<b<<" is "<<result<<endl;
            break;

        case 'c':
            result = combination(a, b);
            if(result == 0){
                cout<<"Exiting..."<<endl;
                return 0;
            }
            cout<<"Combination of the numbers "<<a<<" and "<<b<<" is "<<result<<endl;
            break;

        default:
            cout<<"Operation not available. Please retry."<<endl;
            break;
    }

    return 0;
}
