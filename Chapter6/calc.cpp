
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<exception>

using namespace std;


int main(){

    cout<<"Please enter expression (+, -): "<<endl;
    int lval = 0;
    int rval;
    int res;
    char op;

    cin>>lval>>op>>rval;

    if(op == '+'){
        res = lval + rval;
    }else if(op == '-'){
        res = lval - rval;
    }

    cout<<"Result: "<<res<<endl;

    return 0;
}