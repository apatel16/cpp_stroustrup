
// Bulls and Cows

#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<exception>

using namespace std;

int main()
{
    int temp;
    vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);

    while(1){
        int bulls=0, cows=0;
        for(int i=0; i<4; i++){
            cin>>temp;
            if(temp == numbers[i]){
                bulls++;
            }
            else{
                for(int j=0; j<4; j++){
                    if(temp == numbers[j] && j!=i){
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
