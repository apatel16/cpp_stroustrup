
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<exception>

using namespace std;

int main()
{
    try{
        return 0;
    }
    catch(exception& e){
        cerr<<"error: "<<e.what()<<endl;
        return 1;
    }
    catch(...){
        cerr<<"Oops!!! Unknown exception"<<endl;
        return 2;
    }
}