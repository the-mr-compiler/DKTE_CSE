#include "iostream"
#include "Queue.h"

using namespace std;

int main()
{
    Queue q;
    int data, choice = 0;
    while (choice != 3)
    {
        cout << endl
             << "Menu:" << endl
             << "\t1. Enqueue" << endl
             << "\t2. Dequeue" << endl
             << "\t3. Exit" << endl
             << "Enter Your Choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << endl
                 << "Enter data: ";
            cin >> data;
            q.enqueue(data) ? cout << endl
                                   << data << " inserted"
                            : cout << endl
                                   << "Queue is full";
            break;
        case 2:
            data = q.dequeue();
            data ? cout << endl
                        << data << " removed"
                 : cout << endl
                        << "Queue is empty";
            break;

        default:
            break;
        }
    }
}