#include<iostream>
using namespace std;

struct Date{
    int y;
    int m;
    int d;
};

void add_day(Date &date, int day){
    
    int days_in_month[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days_in_year = 0;
    int temp = 0;
    int temp2 = 0;
    int temp3 = 0;

    for(int i=0; i<date.m-1; i++){
        temp = temp + days_in_month[i];
    }
    days_in_year = temp + date.d;
    days_in_year = days_in_year + day;

    date.y = date.y + (days_in_year/365);
    temp2 = (days_in_year - (days_in_year/365)*365);
    for(int i=0; i<12, temp2>days_in_month[i]; ++i){
        temp2 = temp2 - days_in_month[i];
        temp3 = i;
    }

    date.m = temp3 + 2;
    date.d = temp2;
}


void init_day(Date &dd, int y, int m, int d){
    
    if(m < 1 || m > 12){
        cout<<"Invalid month "<<endl;
        return;
    }

    if(m < 1 || m > 31){
        cout<<"Invlid month "<<endl;
        return;
    }

    dd.d = d;
    dd.m = m;
    dd.y = y;
}


void show_date(const Date &date){
    std::cout<< "(" << date.m << ", " << date.d << ", " << date.y << ")" << std::endl;

}


int main(void)
{
    Date today, tomorrow;

    init_day(today, 1978, 6, 25);
    show_date(today);

    tomorrow = today;
    add_day(tomorrow, 1);
    show_date(tomorrow);

    std::cout<<"Checking for date invariance"<<endl;;
    init_day(today, 2004, 13, -5);
    show_date(tomorrow);

    return 0;
}

