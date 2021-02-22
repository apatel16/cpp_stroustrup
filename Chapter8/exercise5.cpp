#include "std_lib_facilities.h"

void printvec(vector<int> vi, string name){
    cout << name;
    for(int i=0; i<vi.size(); i++){
        cout<< vi[i] << " -> ";
    }
    cout<<endl;
}   


vector<int> reverse_version1(vector<int> vi){
    vector<int> reversed;
    for (int i = vi.size()-1; i>=0; i--){
        reversed.push_back(vi[i]);
    }
    return reversed;
}

void reverse_version2(vector<int> &vi){
    int mid = vi.size() / 2;
    for(int i=0,j=vi.size()-1; i<mid; i++,j--){
        /* swap logic */
        int temp = vi[i];
        vi[i] = vi[j];
        vi[j] = temp;
    }
}



int main(void){
    vector<int> v;
    vector<int> reversed;
    
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);

    printvec(v, "Original Vector :");
    reversed = reverse_version1(v);
    printvec(v, "Original Vector after reverse :");
    printvec(reversed, "Reverse using verison 1:");
    reverse_version2(v);
    printvec(v, "Reversed using version 2:");


    return (0);
}