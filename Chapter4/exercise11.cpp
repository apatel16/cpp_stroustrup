
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>

using namespace std;

vector<int> primes;

bool check_prime(int number){
    if(number == 1){
        return false;
    }
    else if(number == 2){
        primes.push_back(number);
        return true;
    }
    else{
        for(int i=0; i<primes.size(); i++){
            if((number % primes[i]) == 0){
                return false;
            }
        }
    }
    primes.push_back(number);
    return true;
}

int main(int argc, char* argv[])
{
    int max_range=0;

    cout<<"Find the prime number between 1 to "<<max_range<<endl;
    cin>>max_range;
    for(int i=0; i<max_range; i++){
        if (check_prime(i+1)){
            cout<<i+1<<" is prime"<<endl;
        }
    }

    return(0);
}
