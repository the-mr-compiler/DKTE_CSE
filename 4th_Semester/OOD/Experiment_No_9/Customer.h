#include "Person.h"

class Customer : public Person
{
private:
    int custId;

public:
    void purchaseProduct();
    void makePayment();
    void setCustId(int custId);
    int getCustId();
};