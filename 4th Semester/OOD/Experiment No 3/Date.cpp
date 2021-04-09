#include <iostream>
#include "Date.h"
using namespace std;

Date::Date()
{
    this->day = 1;
    this->month = 1;
    this->year = 2001;
};
Date::Date(int dd, int mm, int yyyy)
{
    this->day = dd;
    this->month = mm;
    this->year = yyyy;
}

void Date::setDate()
{
    cout << "Enter date in dd/mm/yyyy : ";
    cin >> this->day;
    cin.get();
    cin >> this->month;
    cin.get();
    cin >> this->year;
}
void Date::printDate()
{
    cout << endl
         << this->day << "/" << this->month << "/" << this->year << endl;
}

void Date::dateDifference(Date s)
{
    Date d;
    d.setDay(abs(this->day - s.getDay()));
    d.setMonth(abs(this->month - s.getMonth()));
    d.setYear(abs(this->year - s.getYear()));
    d.printDate();
}

void Date::incrementDate()
{
    this->day++;
    if (this->days[this->month - 1] < this->day)
    {
        this->month++;
        this->day = 1;
    }
    if (this->month > 12)
    {
        this->year++;
        this->month = 1;
    }
}

void Date::decrementDate()
{
    this->day--;
    if (this->day == 0)
    {
        this->month--;
        if (this->month == 0)
        {
            this->year--;
            this->month = 12;
        }
        this->day = this->days[this->month - 1];
    }
}

int Date::getDay()
{
    return this->day;
}
int Date::getMonth()
{
    return this->month;
}
int Date::getYear()
{
    return this->year;
}
void Date::setDay(int day)
{
    this->day = day;
}
void Date::setMonth(int month)
{
    this->month = month;
}
void Date::setYear(int year)
{
    this->year = year;
}