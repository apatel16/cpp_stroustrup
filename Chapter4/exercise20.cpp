
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>

using namespace std;


int main(int argc, char* argv[])
{
    vector<string> names;
    vector<int> scores;
    int num;
    string temp, name;

    while(cin>>temp>>num){
        for(int i=0; i<names.size(); i++){
            if(temp == names[i]){
                cout<<"Name is entered twice. Exiting ..."<<endl;
                exit(0);
            }
        }
        names.push_back(temp);
        scores.push_back(num);
    }

    cout<<"Enter the name to look for score";
    cin>>name;
    for(int i=0; i<names.size(); i++){
        if(name == names[i]){
            cout<<name<<"'s score is "<<scores[i]<<endl;
        }else{
            cout<<"Name not found"<<endl;
        }
    }
    
    return(0);
}