#include "ShoppingMall.h"

int main()
{
    int maxM, maxC, maxP, c = 0;
    cout << "Enter count of managers customers and products respectively :";
    cin >> maxM >> maxC >> maxP;
    ShoppingMall mall(maxM, maxC, maxP);
    while (c != 10)
    {
        cout << "Menu :"
             << "\n\t1. Add Manager"
             << "\n\t2. Add Customer"
             << "\n\t3. Add Product"
             << "\n\t4. Show Managers"
             << "\n\t5. Show Customers"
             << "\n\t6. Show Products"
             << "\n\t7. Remove Manager"
             << "\n\t8. Remove Customer"
             << "\n\t9. Remove Product"
             << "\n\t10. Exit"
             << "\nEnter Your Choice : ";
        cin >> c;
        switch (c)
        {
        case 1:
            mall.addManager();
            break;
        case 2:
            mall.addCustomer();
            break;
        case 3:
            mall.addProduct();
            break;

        case 4:
            mall.showManagers();
            break;
        case 5:
            mall.showCustomers();
            break;
        case 6:
            mall.showProducts();
            break;

        case 7:
            mall.removeManager();
            break;
        case 8:
            mall.removeCustomer();
            break;
        case 9:
            mall.removeProduct();
            break;
        default:
            break;
        }
        cout << "\n\n";
    }
}