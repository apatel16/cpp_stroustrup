
// Mode of series of strings

#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>

using namespace std;

int main(int argc, char* argv[])
{
    vector<string> numbers;
    int cnt=1;
    int temp = 1;
    int mode = 0;
    string mode_string;
    string series;

    while(cin>>series){
        if(series == "quit"){
            break;
        }
        numbers.push_back(series);
    }

    sort(numbers.begin(), numbers.end());

    for(int i=0; i<numbers.size(); i++){
      if(numbers[i] == numbers[i+1]){
        cnt = cnt + 1;
      }else{
          if(cnt > mode){
              mode_string = numbers[i];
              mode = cnt;
          }
          temp = cnt;
          cnt = 1;
      }
    }

    cout<<"MIN: "<<numbers[0]<<endl;
    cout<<"MODE: "<<mode_string<<endl;
    cout<<"MAX: "<<numbers[numbers.size()-1]<<endl;

    return(0);
}
