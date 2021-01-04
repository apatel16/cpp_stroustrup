
// Bulls and Cows

#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<exception>

using namespace std;

int main()
{
    char temp;
    vector<char> characters;
    characters.push_back('a');
    characters.push_back('b');
    characters.push_back('c');
    characters.push_back('d');

    while(1){
        int bulls=0, cows=0;
        for(int i=0; i<4; i++){
            cin>>temp;
            if(temp == characters[i]){
                bulls++;
            }
            else{
                for(int j=0; j<4; j++){
                    if(temp == characters[j] && j!=i){
                        cows++;
                    }
                }//End for
            }
        }//End for
        cout<<"Bulls: "<<bulls<<" Cows: "<<cows<<endl;
        if(bulls == 4){
            break;
        }
    }// End While
    cout<<"You Win!!!"<<endl;

    return 0;
}