
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int main(int argc, char* argv[])
{
    int low=0;
    int high=100, mid;
    char answer='y';

    cout<<"Guess the number between 1 and 100."<<endl;
   
    while(low != high){
        cout<<"Is it < "<<(low+high+1)/2<<endl;
        cin>>answer;
        if(answer == 'y'){
            high = (high + low)/2;;
        }
        else if(answer == 'n'){
            low = (high + low)/2;;
        }
        else{
            cout<<"ERROR"<<endl;
        }
        cout<<"LOW: "<<low<<"HIGH: "<<high<<endl;
    }
    cout<<"The number is :"<<low<<endl;

    return(0);
}
