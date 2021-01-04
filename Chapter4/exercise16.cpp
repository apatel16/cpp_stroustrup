
// Mode of series

#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>

using namespace std;

int main(int argc, char* argv[])
{
    vector<int> numbers;
    int cnt=1;
    int temp = 1;
    int mode = 0, min = 9999999, max = -999999;
    int series = 0;

    while(cin>>series){
        numbers.push_back(series);
    }

    sort(numbers.begin(), numbers.end());

    // Find the mode of the series
    for(int i=0; i<numbers.size(); i++){
      if(numbers[i] == numbers[i+1]){
        cnt = cnt + 1;
      }else{
          if(cnt > mode){
              mode = numbers[i];
          }
          temp = cnt;
          cnt = 1;
      }
    }

    cout<<"MODE: "<<mode<<endl;
    cout<<"MAX: "<<numbers[numbers.size()-1]<<endl;
    cout<<"MIN: "<<numbers[0]<<endl;
    return(0);
}
