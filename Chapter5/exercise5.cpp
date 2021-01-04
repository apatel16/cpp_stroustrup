
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<exception>
#include "std_lib_facilities.h"

using namespace std;

double ctok(double c){
    double k;
    if (c < -273.15){
        error("Please provide number bigger than -273.15");
    }
    else{
        k = c + 273.15;
    }

    return k;
}

double ktoc(double k){
    double c;
    if (k < 0){
        error("Please provide number bigger than 0");
    }
    else{
        c = k - 273.15;
    }

    return c;
}

int main()
{
    double c = 0;
    cin >> c;
    double k = ctok(c);
    double l = ktoc(k);
    cout<<k<<"::"<<l<<endl;
    return 0;
}