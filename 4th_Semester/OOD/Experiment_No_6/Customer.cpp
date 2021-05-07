#include "Customer.h"

void Customer::purchaseProduct()
{
    cout<<"Purchasing Product";
}
void Customer::makePayment()
{
    cout<<"Making Payment";
}
void Customer::setCustId(int custId)
{
    this->custId=custId;
}
int Customer::getCustId()
{
    return this->custId;
}