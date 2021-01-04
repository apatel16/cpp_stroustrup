
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<exception>

using namespace std;

vector<double> series;
vector<double> differences;

int main()
{

    vector<int> fibonnaci;
    fibonnaci.push_back(1);
    fibonnaci.push_back(1);

    int temp;
    int i=0;
 
    while(fibonnaci[i] > 0){
        temp = fibonnaci[i] + fibonnaci[i+1];
        fibonnaci.push_back(temp);
        i++;
    }

    cout<<"Largest fibonnaci number that can fit in integer is: ";
    cout<<fibonnaci[i-1]<<endl;
    
    return 0;
}
