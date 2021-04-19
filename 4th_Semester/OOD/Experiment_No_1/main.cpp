#include "date.h"
#include "date_fun.h"
#include "iostream"
using namespace std;
int main()
{
    struct date d;
    setDate(&d);
    struct date d1;
    int day, month;
    int choice;
    while (choice != 6)
    {
        cout << "\n1. Accept date\n2. Print address\n3. Display date in multiple formats\n4. Find difference\n5. Increment date\n6. Exit\n\nEnter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            setDate(&d);
            break;
        case 2:
            printAddress(&d);
            break;

        case 3:
            print(d);
            break;

        case 4:
            setDate(&d1);
            d1 = difference(d, d1);
            cout << "\nDifference is : " << d1.day << " Days, " << d1.month << " Months and " << d1.year << " Years\n";
            break;

        case 5:
            cout << "Enter date and month to increment date(in dd/mm format) :";
            cin >> day;
            cin.get();
            cin >> month;
            incrementDate(&d, day, month);
            cout << "\nAfter increment : ";
            getDate(d);
            break;

        case 6:
            break;
        default:
            break;
        }
    }
}