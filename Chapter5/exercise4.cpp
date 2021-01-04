// This program has bug that ctok function returns value even when validation
// fails


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

int main()
{
    double c = 0;
    cin >> c;
    double k = ctok(c);
    cout<<k<<endl;
    return 0;
}