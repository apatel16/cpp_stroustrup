#include<iostream>
#include<string>

using namespace std;

int main(){

    string first_name;
    double age = -1;

    cout<< "Please enter the name and age of person\n";
    cin >> first_name >> age;
    cout << "Hi "<<first_name<< ", your age in months is "<< (age * 12);

    return(0);
}