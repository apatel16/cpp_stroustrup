
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<exception>

using namespace std;

class BadException{};

void solve_equation(int a, int b, int c){

    double part1 = (b*b) - (4 * a * c);
    if (part1 < 0){
        throw BadException();
    }
    double part2 = (-b + sqrt(part1)) / (2.0 * a);
    double part3 = (-b - sqrt(part1)) / (2.0 * a);
    cout<<"X1: "<<part2<<endl;
    cout<<"X2: "<<part3<<endl;
}

int main()
{
    int a, b, c;
    cout<<"Enter a, b and c of the quadratic equation"<<endl;
    cin>>a>>b>>c;
    try{
        solve_equation(a, b, c);
    }
    catch(BadException& e){
        cerr<<"Error: Square root term in equation is 0."<<endl;
    }
    return 0;
}