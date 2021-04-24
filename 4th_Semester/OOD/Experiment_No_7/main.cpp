#include "LinkedList.h"
#include "iostream"
using namespace std;

int main()
{
    LinkedList l;
    int choice = 0;
    int data;
    while (choice != 10)
    {
        cout << endl
             << "Menu:\n\t1. Attach at begin\n\t2. Attach after\n\t3. Attach at  end" << endl
             << "\t4. Detach from begin\n\t5. Detach given\n\t6. Detach from end" << endl
             << "\t7. Traverse\n\t8. Delete List\n\t10. Exit\n\nEnter Your Choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
            l.attachAtBegin() ? cout << "\nInsert Successfull" : cout << "\nAn Error Occured";
            break;
        case 2:
            cout << "\nEnter data for search :";
            cin >> data;
            l.attachAfter(data) ? cout << "\nInsert Successfull" : cout << "\nAn Error Occured";
            break;
        case 3:
            l.attachAtEnd() ? cout << "\nInsert Successfull" : cout << "\nAn Error Occured";
            break;
        case 4:
            data = l.detachFromBegin();
            data ? cout << "\n"
                        << data << "Deleted"
                 : cout << "\nAn Error Occured";
            break;
        case 5:
            cout << "Enter data to delete :";
            cin >> data;
            l.detachGiven(data) ? cout << "\n"
                                       << data << "Deleted"
                                : cout << "\nAn Error Occured";
            break;
        case 6:
            data = l.detachFromEnd();
            data ? cout << "\n"
                        << data << "Deleted"
                 : cout << "\nAn Error Occured";
            break;
        case 7:
            l.traverse();
            break;
        case 8:
            l.deleteList();
            break;
        default:
            break;
        }
    }
    return 0;
}
