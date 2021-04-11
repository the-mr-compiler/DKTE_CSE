#include "Person.h"
#include "Product.h"
int main()
{
    Person per;
    Product prd;

    cout << endl
         << "Enter Person Details :" << endl;
    per.acceptPersonDetails();

    cout << endl
         << "Enter Product Details :" << endl;
    prd.intialiseProduct();

    cout << endl
         << "You Entered : " << endl;
    per.displayPersonDetails();
    prd.displayProduct();
}
