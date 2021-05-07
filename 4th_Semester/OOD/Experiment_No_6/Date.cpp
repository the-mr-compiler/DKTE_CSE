#include <iostream>
#include "Date.h"
using namespace std;

Date::Date(){};
Date::Date(int d,int m,int y){
    this->day=d;
    this->month=m;
    this->year=y;
}

void Date::setDate(){
    cout<<"Enter date in dd/mm/yyyy : ";
    cin>>this->day;
    cin.get();
    cin>>this->month;
    cin.get();
    cin>>this->year;
}
void Date::printDate(){
    cout<<this->day<<"/"<<this->month<<"/"<<this->year<<endl;
}

int Date::getDay(){
    return this->day;
}
int Date::getMonth(){
    return this->month;
}
int Date::getYear(){
    return this->year;
}
void Date::setDay(int day){
    this->day=day;
}
void Date::setMonth(int month){
    this->month=month;
}
void Date::setYear(int year){
    this->year=year;
}
int Date::calculateAge(Date currentDate){
    return currentDate.getYear()-this->getYear();
}