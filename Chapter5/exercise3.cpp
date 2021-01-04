
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<exception>

using namespace std;

double ctok(double c){
    double k = c + 273.15;
    return k;
}

int main()
{
    double c = 0;
    cin >> c;
    if (c < -273.15){
        cerr<<"Please provide number bigger that -273.15"<<endl;
        return 1;
    }
    double k = ctok(c);
    cout<<k<<endl;
}