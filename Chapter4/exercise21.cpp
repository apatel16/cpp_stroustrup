
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
    int num, score;
    string temp;

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

    cout<<"Enter the score to look for names."<<endl;
    cin>>score;
    for(int i=0; i<names.size(); i++){
        if(score == scores[i]){
            cout<<names[i]<<" has score of "<<score<<endl;
        }else{
            cout<<"No name associated with the score inputed."<<endl;
            break;
        }
    }
    
    return(0);
}