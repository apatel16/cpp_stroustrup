
// Bulls and Cows

#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<exception>

using namespace std;

int main()
{
    string number;
    int ones, tens, hundreds, thousands;
    cin>>number;
    cout<<number<<" is ";

    for(int i=number.size()-1, j=0; i>=0, j<number.size(); i--, j++){
        int temp = number[i] - '0';
        
        switch(i){
            case 0:
                cout<<temp<<" thousands ";
                break;
            case 1:
                cout<<temp<<" hundreads ";
                break;
            case 2:
                cout<<temp<<" tens ";
                break;
            case 3:
                cout<<temp<<" ones ";
                break;
        }

        int position = pow(10, j);
        temp = temp * position;
    }



    return 0;
}
