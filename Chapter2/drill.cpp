#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main(){

    string first_name;
    string friend_name;
    char friend_sex = 0;
    int age = 0;
    
    cout<<"Please enter name.\n";
    
    cin>>first_name;
    cout<<"Enter friend name, age, sex.";
    cin>>friend_name>>age>>friend_sex;
    
    cout<<"Dear, "<<first_name;
    cout<<"\n\tHow are you doing? It's been long and haven't heard anything from you\n";
    cout<<"Hope everything is great. I am doing well to. I am moving to Washington next\n";
    cout<<"month. If you get time let's make plan to meet somewhere with you mee and\n";
    cout<<friend_name;
    cin>>friend_sex;
    if(friend_sex == 'f'){
        cout<<"If you see "<<friend_name<<" please ask her to call me. ";
    }else{
        cout<<"If you see "<<friend_name<<" please ask him to call me. ";
    }
    

    cout<<"I hear you just had a birthday and you are "<<age<<" years old.\n";
    if (age <= 0 || age > 110){
        cerr<<"You're kidding!"<<endl;        
    }

    if (age < 12){
        cout<<"Next year you will be age+1."<<endl;
    }
    if(age == 17){
        cout<<"Next year you will be able to vote."<<endl;
    }
    if(age >= 70){
        cout<<"I hope you are enjoying your retirement.\n"<<endl;
    }

    cout<<"Yours sincerely, "<<endl<<"AKSHAY";
    return(0);
}