
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<exception>

using namespace std;

vector<int> series;

int main()
{
    int number;
    int addCount, sum=0;
    
    while(cin>>number){
        series.push_back(number);
    }
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
    cout<<"Enter how many numbers you want to add?"<<endl;
    cin>>addCount;
    if (addCount < series.size()){
        for(int i=0; i<addCount; i++){
            sum = sum + series[i];
        }
    }
    cout<<"Sum of the series is: "<<sum<<endl;
    
    return 0;
}