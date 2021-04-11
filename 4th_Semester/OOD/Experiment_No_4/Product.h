#include <iostream>

using namespace std;

class Product
{
private:
    int productId, stockQantity, minimumQuantity;
    string productName;
    float salesPrice, purchasePrice, discount;

public:
    Product();
    void intialiseProduct();
    void displayProduct();
    void setProductId(int productId);
    void setStockQuantity(int stockQantity);
    void setMinimumQuantity(int minimumQuantity);
    void setProductName(string productName);
    void setSalesPrice(float salesPrice);
    void setPurchasePrice(float purchasePrice);
    void setDiscount(float discount);
    int getProductId();
    int getStockQuantity();
    int getMinimumQuantity();
    string getProductName();
    float getSalesPrice();
    float getPurchasePrice();
    float getDiscount();
};