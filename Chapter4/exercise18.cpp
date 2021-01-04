
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>

using namespace std;

void solve_equation(double a, double b, double c){

    double x1, x2;
    double part1, part2, part3;

    part1 = (4*a*c);
    part2 = b*b;

    cout<<part2-part1<<endl;
    part3 = sqrt(part2 - part1);

    x1 = (-b + part3) / (2*a);
    x2 = (-b - part3) / (2*a);

    cout<< "X1: "<<x1<<endl;
    cout<< "X2: "<<x2<<endl;
}

int main(int argc, char* argv[])
{
    double a, b, c;

    cout<<"Enter the values of a, b, c"<<endl;
    cin>>a>>b>>c;

    cout<<"Solving the equation "<<a<<"x^2 + ("<<b<<"x) + ("<<c<<")"<<endl;
    solve_equation(a, b, c);

    return(0);
}
