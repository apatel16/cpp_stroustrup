
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<exception>

using namespace std;

double ctof(double c){
    double f;
    f = c * (9.0/5.0) + 32;
    return f;
}

double ftoc(double f){
    double c;
    c = (5.0/9.0)*(f - 32);
    return c;
}

int main()
{
    double temperature;
    cin>>temperature;
    double f = ctof(temperature);
    cout<<f<<endl;
    return 0;
}