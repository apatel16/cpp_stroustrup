#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(int argc, char* argv[]){

    vector<string> words;
    vector<string> exclude;

    exclude.push_back("Egg Plant"); 
    exclude.push_back("Garlic");
    exclude.push_back("Onion");
    exclude.push_back("Chilli");
    exclude.push_back("Pizza");

    string temp;
    while(cin>>temp)
        words.push_back(temp);
        
    cout<< "Number of words in input: "<<words.size()<<endl;
    cout<< "Number of words in exclude: "<<exclude.size()<<endl;

    for(int i=0; i<words.size(); ++i){
        for (int j=0; j<exclude.size(); ++j){
            if (words[i] == exclude[j]){
                cout<<"BLEEP"<<endl;
                break;
            }
            if(j == exclude.size()-1){
                cout<<words[i]<<endl;
            }
        }
    }

    return(0);
}