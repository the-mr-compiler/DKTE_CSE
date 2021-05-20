#include "Manager.h"
#include "Customer.h"
#include "Product.h"

class ShoppingMall
{
private:
    Manager *m;
    Customer *c;
    Product *p;
    int countM, countC, countP;
    int maxM, maxC, maxP;

public:
    ShoppingMall(int managerCount, int customerCount, int productCount);
    void addManager();
    void addCustomer();
    void addProduct();
    void removeCustomer();
    void removeManager();
    void removeProduct();
    void showManagers();
    void showCustomers();
    void showProducts();
    ~ShoppingMall();
};
