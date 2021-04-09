#include <iostream>
using namespace std;
#include "Date.h"
int main()
{
    Date d1;
    d1.setDate();
    cout << "You entered : ";
    d1.printDate();
    d1.incrementDate();
    cout << "\nAfter increment : ";
    d1.printDate();
    d1.decrementDate();
    cout << "\nAfter decrement : ";
    d1.printDate();

    Date d2(8, 4, 2021);
    cout << "Difference between :";
    d2.printDate();
    cout << "and ";
    d1.printDate();
    cout << " is ";
    d1.dateDifference(d2);
}