#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int main(int argc, char* argv[])
{

    vector<double> temperatures;
    double temp;

    while(cin>>temp)
    {
        temperatures.push_back(temp);
    }

    sort(temperatures.begin(), temperatures.end());

    int size = temperatures.size();
    if (size % 2 == 0)
    {
        double median = temperatures[temperatures.size()/2-1]  + temperatures[temperatures.size()/2];
        median /= 2;
        cout << "Median temperature is : "<<median<<endl;
    }
    else
    {
        cout << "Median temperature is : "<<temperatures[temperatures.size()/2]<<endl;
    }
    
    return(0);
}
