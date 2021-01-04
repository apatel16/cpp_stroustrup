#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(int argc, char* argv[]){

    int count = 0;
    double sum = 0;
    double number, temp;
    double max = -999999999, min=9999999999;
    string unit;
    vector <double>num_cm;

    while(cin>>number>>unit){
        temp = number;

        if(unit == "" || unit == "yard" || unit =="meter" || 
           unit=="gallons" || unit=="y")
        {
            cout<<"Please enter correct unit"<<endl;
            continue;
        }

        if(unit == "m"){
            number *= 100;
        }
        if(unit == "in"){
            number = number * 2.54;
        }
        if(unit == "ft"){
            number = number * 12 * 2.54;
        }
        
        num_cm.push_back(number);
        sum += number;
        count++;

        if (number > max){
            max = number;
            cout<<temp<<unit<<" is largest so far seen."<<endl;
        }
        else if (number < min) {
            min = number;
            cout<<temp<<unit<<" is smallest so far seen. "<<endl;
        }
    }// while end

    if(number == 0){
        cout<<max<<" is largest so far seen."<<endl;
        cout<<min<<" is smallest so far seen. "<<endl;
        cout<<"Total number entered: "<<count<<endl;
        cout<<"Sum of "<<count<<" numbers in cm is "<<sum<<endl;
    }

    cout<<"All entered numbers are: ";
    sort(num_cm.begin(), num_cm.end());
    for(int i=0; i<num_cm.size(); i++){
        cout<<num_cm[i]<<" --> ";
    }

    return(0);
}// main end