
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int main(int argc, char* argv[])
{

    vector<double> distances;
    double temp,  mean=0, sum = 0;

    while(cin>>temp)
    {
        distances.push_back(temp);
    }
    
    for(int i=0; i<distances.size(); ++i)
    {
        sum += distances[i];
    }

    cout<< "Total distance is  :"<<sum<<endl;
    sort(distances.begin(), distances.end());

    cout<< "Smallest distance between two cities is : "<<distances[0]<<endl;
    cout<< "Largest distance between two cities is : "<<distances[distances.size()-1]<<endl;

    for(int i=0; i<distances.size()-1; ++i)
    {
        mean += (distances[i] + distances[i+1]);
    }

    cout<< "Mean distance between two cities is :"<< mean/(distances.size()-1) <<endl;


    return(0);
}
