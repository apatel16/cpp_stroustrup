// Version 4 : Month day argument passing resolve using enum
// But it caused add_day function to not be able to increase month

#include<iostream>
using namespace std;

class Date{
public:
    enum Month{
        jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
    };

    Date(int y, Month m, int d);
    void add_day(int day);
    void show_date();
private:
    int y;
    Month m;
    int d;
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
    
    m = Date::Month(temp3 + 2); // casting integer to our enum type
    d = temp2;
}


Date::Date(int year, Month month, int day){
    
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
    Date today(1978, Date::jun, 25);
    today.show_date();

    today.add_day(10);
    today.show_date();

    Date tomorrow = today;
    tomorrow.show_date();

    std::cout<<"Checking for date invariance"<<endl;
    Date last(2004, Date::feb, -5);
    last.show_date();

    return 0;
}

