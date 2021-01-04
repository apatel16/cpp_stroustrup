
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
    double number;
    double addCount, sum=0;
    
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
    
    cout<<"Differences of the numbers in series are:"<<endl;
    for(int i=0; i<series.size()-1; i++){
        differences.push_back(abs(series[i]-series[i+1]));
        cout<<differences[i]<<":";
    }

    return 0;
}