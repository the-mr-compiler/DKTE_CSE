#include <iostream>
#include <iomanip>
#include "date.h"
using namespace std;
int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
char mon[12][5] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

void setDate(struct date *d)
{

    cout << "Enter date in dd/mm/yyyy format :";
    cin >> d->day;
    cin.get();
    cin >> d->month;
    cin.get();
    cin >> d->year;
}

void print(struct date d)
{
    cout << setfill('0');
    cout << "\ndd-mm-yyyy :" << setw(2) << d.day << '-' << setw(2) << d.month << '-' << setw(4) << d.year;
    cout << "\ndd-MMM-yyyy :" << setw(2) << d.day << '-' << setw(2) << mon[d.month - 1] << '-' << setw(4) << d.year;
    cout << "\ndd-mm-yyyy :" << setw(2) << d.day << '/' << setw(2) << d.month << '/' << setw(2) << (d.year % 100);
}

void printAddress(struct date *d)
{
    cout << endl
         << "Address of date: " << d << endl
         << "Address of date.day: " << &d->day << endl
         << "Address of date.month: " << &d->month << endl
         << "Address of date.year:" << &d->year << endl;
}

struct date difference(struct date f, struct date s)
{
    struct date d;

    if (f.month != s.month)
    {
        if (f.month > s.month)
        {
            d = f;
            f = s;
            s = d;
        }
        d.month = (s.month - 1) - (f.month);
        d.day = (days[f.month - 1] - f.day) + d.day;
    }
    else
    {
        d.month = s.month - f.month;
        d.day = f.day - s.day;
    }
    d.year = f.year - s.year;
    d.day = abs(d.day);
    d.month = abs(d.month);
    d.year = abs(d.year);
    return d;
}

void getDate(struct date d)
{
    cout << setfill('0');
    cout << "\ndd-mm-yyyy :" << setw(2) << d.day << '-' << setw(2) << d.month << '-' << setw(4) << d.year;
}
void incrementDate(struct date *d, int day, int m)
{
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    d->day += day;
    if (days[d->month - 1] < d->day)
    {
        d->day = d->day - days[d->month - 1];
        d->month++;
    }
    d->month += m;
    if (d->month > 12)
    {
        d->month -= 12;
        d->year++;
    }
}