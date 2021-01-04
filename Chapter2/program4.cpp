#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main(){

    int n;
    double d;

    cout<<"Enter a integer number\n";
    cin>>n;
    cout<<"n == "<<n<<endl;
    cout<<"n + 1 = "<<n+1<<endl;
    cout<<"n * 3 = "<<n*3<<endl;
    cout<<"n * n = "<<n*n<<endl;
    cout<<"n / 2 = "<<n/2<<endl;
    d = sqrt(n);
    cout<<"square-root of n == "<<d<<endl;

    return(0);
}