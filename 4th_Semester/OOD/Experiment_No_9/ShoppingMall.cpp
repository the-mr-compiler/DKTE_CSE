#include "ShoppingMall.h"

ShoppingMall::ShoppingMall(int managerCount, int customerCount, int productCount)
{
    this->maxC = customerCount;
    this->maxM = managerCount;
    this->maxP = productCount;
    this->countC = 0;
    this->countP = 0;
    this->countM = 0;
    m = new Manager[managerCount];
    c = new Customer[customerCount];
    p = new Product[productCount];
}

void ShoppingMall::addCustomer()
{
    if (countC < maxC)
    {
        Customer cust;
        int cid;
        cout << "\nEnter cust id :";
        cin >> cid;
        cust.setCustId(cid);
        cust.acceptPersonDetails();
        c[countC] = cust;
        countC++;
    }
    else
    {
        cout << "\nMaximum Count Reached...";
    }
}
void ShoppingMall::addManager()
{
    if (countM < maxM)
    {
        Manager m1;
        int mid;
        cout << "Enter manager id :";
        cin >> mid;
        m1.setEmpId(mid);
        m1.acceptPersonDetails();
        m[countM] = m1;
        countM++;
    }
    else
    {
        cout << "\nMaximum Count Reached...";
    }
}
void ShoppingMall::addProduct()
{
    if (countP < maxP)
    {
        Product p1;
        p1.intialiseProduct();
        p[countP] = p1;
        countP++;
    }
    else
    {
        cout << "\nMaximum Count Reached...";
    }
}
void ShoppingMall::showCustomers()
{
    if (countC == 0)
    {
        cout << "\nNo Customers";
        return;
    }
    cout << "\nCustomers:";
    for (int i = 0; i < countC; i++)
    {
        cout << endl
             << i + 1 << ":";
        cout << endl
             << "Cust id : " << c[i].getCustId();
        c[i].displayPersonDetails();
    }
}
void ShoppingMall::showManagers()
{
    if (countM == 0)
    {
        cout << "\nNo Managers";
        return;
    }
    cout << "\nManagers:";
    for (int i = 0; i < countM; i++)
    {
        cout << endl
             << i + 1 << ":";
        cout << endl
             << "Emp id : " << m[i].getEmpId();
        m[i].displayPersonDetails();
    }
}
void ShoppingMall::showProducts()
{
    if (countP == 0)
    {
        cout << "\nNo Products";
        return;
    }
    cout << "\nProducts:";
    for (int i = 0; i < countP; i++)
    {
        cout << endl
             << i + 1 << ":";
        p[i].displayProduct();
    }
}
void ShoppingMall::removeCustomer()
{
    if (countC == 0)
    {
        cout << "\nNo Customers.";
        return;
    }
    showCustomers();
    cout << endl
         << "Enter no of customer to delete :";
    int id;
    cin >> id;
    if (id > countC)
    {
        cout << "Invalid..";
    }
    if (id == countC)
        countC--;
    else
    {
        id--;
        for (; id < countC - 1; id++)
        {
            c[id] = c[id + 1];
        }
        countC--;
    }
}
void ShoppingMall::removeManager()
{
    if (countM == 0)
    {
        cout << "\nNo Managers.";
        return;
    }
    showManagers();
    cout << endl
         << "Enter no of Manager to delete :";
    int id;
    cin >> id;
    if (id > countM)
    {
        cout << "Invalid..";
    }
    if (id == countM)
        countM--;
    else
    {
        id--;
        for (; id < countM - 1; id++)
        {
            c[id] = c[id + 1];
        }
        countM--;
    }
}
void ShoppingMall::removeProduct()
{
    if (countP == 0)
    {
        cout << "\nNo Products.";
        return;
    }
    showProducts();
    cout << endl
         << "Enter no of Product to delete :";
    int id;
    cin >> id;
    if (id > countP)
    {
        cout << "Invalid..";
    }
    if (id == countP)
        countP--;
    else
    {
        id--;
        for (; id < countP - 1; id++)
        {
            c[id] = c[id + 1];
        }
        countP--;
    }
}

ShoppingMall::~ShoppingMall()
{
    delete c;
    delete m;
    delete p;
}