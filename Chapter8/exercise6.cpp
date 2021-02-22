#include "std_lib_facilities.h"

void printvec(vector<int> vi, string name){
    cout << name;
    for(int i=0; i<vi.size(); i++){
        cout<< vi[i] << " -> ";
    }
    cout<<endl;
}   

void printvec(vector<string> vi, string name){
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

vector<string> reverse_version1(vector<string> vi){
    vector<string> reversed;
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

void reverse_version2(vector<string> &vi){
    int mid = vi.size() / 2;
    for(int i=0,j=vi.size()-1; i<mid; i++,j--){
        /* swap logic */
        string temp = vi[i];
        vi[i] = vi[j];
        vi[j] = temp;
    }
}


int main(void){
    vector<string> v;
    vector<string> reversed;
    
    v.push_back("A");
    v.push_back("B");
    v.push_back("C");
    v.push_back("D");
    v.push_back("E");

    printvec(v, "Original Vector :");
    reversed = reverse_version1(v);
    printvec(v, "Original Vector after reverse :");
    printvec(reversed, "Reverse using verison 1:");
    reverse_version2(v);
    printvec(v, "Reversed using version 2:");


    return (0);
}