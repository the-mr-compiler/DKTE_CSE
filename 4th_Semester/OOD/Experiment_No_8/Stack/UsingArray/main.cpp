#include <iostream>
#include "Stack.h"
using namespace std;
int main()
{
    Stack s;
    int data, choice = 0;

    while (choice != 3)
    {
        cout << endl
             << "Menu:" << endl
             << "\t1. Push" << endl
             << "\t2. Pop" << endl
             << "\t3. Exit" << endl
             << "Enter Your Choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << endl
                 << "Enter data :";
            cin >> data;
            s.push(data) ? cout << "\nPushed " << data << " successfully" : cout << "\nStack Overflow";
            break;

        case 2:
            data = s.pop();
            data ? cout << "\n"
                        << data << " popped"
                 : cout << "\nStack Underflow";
        default:
            break;
        }
    }
}