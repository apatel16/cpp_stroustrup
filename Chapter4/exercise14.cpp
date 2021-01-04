
// algorithm Sieve of Eratosthenes is
//     input: an integer n > 1.
//     output: all prime numbers from 2 through n.

//     let A be an array of Boolean values, indexed by integers 2 to n,
//     initially all set to true.
    
//     for i = 2, 3, 4, ..., not exceeding √n do
//         if A[i] is true
//             for j = i2, i2+i, i2+2i, i2+3i, ..., not exceeding n do
//                 A[j] := false

//     return all i such that A[i] is true.


#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>

using namespace std;

vector<bool> arr;

int main(int argc, char* argv[])
{

    int maxrange = 0;
    cout<<"Enter the max range to find the prime numbers between"<<endl;
    cin>>maxrange;

    // Fill the array with true boolean value
    for(int i=2; i<maxrange; i++){
        arr.push_back(true);
    }

    // change non prime to false using algorithm
    for(int i=2; i<sqrt(arr.size()); i++){
        if(arr[i] == true){
            for(int j=i*2; j<maxrange; j=j+i){
                arr[j] = false;
            }
        }
    }

    // Print the primes
    cout<<"Prime between 1 to "<<maxrange<<": "<<endl;
    for(int i=2; i<arr.size(); i++){
        if(arr[i] == true){
        cout<<i<<endl;
        }
    }

    return(0);
}
