// Version 3 : Keep details private

#include<iostream>
using namespace std;

struct Date{
    int y;
    int m;
    int d;
    Date(int y, int m, int d);
    void add_day(int day);
    void show_date();
};

void Date::add_day(int day){
    
    int days_in_month[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days_in_year = 0;
    int temp = 0;
    int temp2 = 0;
    int temp3 = 0;

    for(int i=0; i<m-1; i++){
        temp = temp + days_in_month[i];
    }
    days_in_year = temp + d;
    days_in_year = days_in_year + day;

    y = y + (days_in_year/365);
    temp2 = (days_in_year - (days_in_year/365)*365);
    for(int i=0; i<12, temp2>days_in_month[i]; ++i){
        temp2 = temp2 - days_in_month[i];
        temp3 = i;
    }

    m = temp3 + 2;
    d = temp2;
}


Date::Date(int year, int month, int day){
    
    if(month < 1 || month > 12){
        cout<<"Invalid month "<<endl;
        return;
    }

    if(day < 1 || day > 31){
        cout<<"Invlid month "<<endl;
        return;
    }

    d = day;
    m = month;
    y = year;
}


void Date::show_date(){
    std::cout<< "(" << m << ", " << d << ", " << y << ")" << std::endl;

}


int main(void)
{
    Date today(1978, 6, 25);
    today.show_date();

    Date tomorrow = today;
    tomorrow.show_date();

    std::cout<<"Checking for date invariance"<<endl;
    Date last(2004, 13, -5);
    last.show_date();

    return 0;
}

