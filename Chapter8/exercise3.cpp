#include "std_lib_facilities.h"

int fibonnaci(int x, int y, vector<int>& v, int n){
    /* x : v[0], y : v[1], n : size of v, v : empty vector */
    if(n == 1){
        v.push_back(x);
        return 1;
    }
    else if (n == 2){
        v.push_back(x);
        v.push_back(y);
        return 1;
    }
    else{
        v.push_back(x);
        v.push_back(y);
        for(int i=2; i<n; i++){
            if((v[i-1] + v[i-2]) < 0){
                return -1;
            }
            v.push_back(v[i-1] + v[i-2]);
        }
    }
    return 1;
}


void printvec(vector<int> vi, string name){
    cout << name <<endl;
    for(int i=0; i<vi.size(); i++){
        cout<< vi[i] << " -> ";
    }
    cout<<endl;
}   

int main(void){
    vector<int> v;
    int first_number = 1;
    int second_number = 2;
    int vector_size = 1;
    int ret_value;

    try{
        while(true){
            vector<int> v;
            ret_value = fibonnaci(first_number, second_number, v, vector_size);
            if(ret_value == -1){
                cout<<"Integer limit exceeded for fibonnaci." <<endl;
                cout<<"Printing Last element that can fit ->"<<v[v.size() - 1];
                break;
            }
            vector_size = vector_size + 5;
            printvec(v, "Fibonnaci Series: ");
        }
    }
    catch(exception &e){
        cerr<< e.what() <<endl;
    }
    
    return (0);
}