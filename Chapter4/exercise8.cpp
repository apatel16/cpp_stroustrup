
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>

using namespace std;

int main(int argc, char* argv[])
{
    double total_grains=0;
    int reward;
    int i=0;

    while(i<64){
        reward = pow(2, (i+1));
        total_grains = total_grains + reward;
        cout<<" Total grains are : "<<total_grains<<endl;

        if(total_grains >= 1000000000){
            cout<<"For 1000000000 grains of rice inventor requires "<<(i+1)<< " squares"<<endl;
        }
        else if(total_grains >= 1000000){
            cout<<"For 1000000 grains of rice inventor requires "<<(i+1)<< " squares"<<endl;
        }
        else if(total_grains >= 1000){
            cout<<"For 1000 grains of rice inventor requires "<<(i+1)<< " squares"<<endl;
        }
        i++;
    }

    return(0);
}
