
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int main(int argc, char* argv[])
{
    vector<string> numbersString;
    vector<int> numbersInts;
    int digit;

    numbersString.push_back("one");
    numbersString.push_back("two");
    numbersString.push_back("three");
    numbersString.push_back("four");
    numbersString.push_back("five");
    numbersString.push_back("six");
    numbersString.push_back("seven");
    numbersString.push_back("eight");
    numbersString.push_back("nine");

    numbersInts.push_back(0);
    numbersInts.push_back(1);
    numbersInts.push_back(2);
    numbersInts.push_back(3);
    numbersInts.push_back(4);
    numbersInts.push_back(5);
    numbersInts.push_back(6);
    numbersInts.push_back(7);
    numbersInts.push_back(8);
    numbersInts.push_back(9);

    cout << "Enter the digit: "<<endl;
    while(cin >> digit){
        cout<< "The digit in string form is: "<< numbersString[digit-1]<<endl;
        cout<< "The digit in Int form is: "<< numbersInts[digit]<<endl;
    }
    
    return(0);
}
