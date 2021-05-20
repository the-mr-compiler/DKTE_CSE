#include "Product.h"
Product::Product()
{
    this->productId = 0;
    this->productName = "";
    this->purchasePrice = 0;
    this->salesPrice = 0;
    this->discount = 0;
    this->stockQantity = 0;
    this->minimumQuantity = 0;
}

void Product::intialiseProduct()
{
    cout << "\nId :";
    cin >> this->productId;
    cin.get();
    cout << "Name :";
    getline(cin, this->productName);
    cout << "Purchase Price :";
    cin >> this->purchasePrice;
    cout << "Sales Price :";
    cin >> this->salesPrice;
    cout << "Discount :";
    cin >> this->discount;
    cout << "Stock Quantity :";
    cin >> this->stockQantity;
    cout << "Minimum Stock :";
    cin >> this->minimumQuantity;
}

void Product::displayProduct()
{
    cout << "\nProduct Details :";
    cout << "\nId :" << this->productId;
    cout << "\nName :" << this->productName;
    cout << "\nPurchase Price :" << this->purchasePrice;
    cout << "\nSales Price :" << this->salesPrice;
    cout << "\nDiscount :" << this->discount;
    cout << "\nStock Quantity :" << this->stockQantity;
    cout << "\nMinimum Stock :" << this->minimumQuantity;
}

void Product::setProductId(int productId)
{
    this->productId = productId;
}
void Product::setStockQuantity(int stockQuantity)
{
    this->stockQantity = stockQuantity;
}
void Product::setMinimumQuantity(int minimumQuantity)
{
    this->minimumQuantity = minimumQuantity;
}
void Product::setProductName(string productName)
{
    this->productName = productName;
}
void Product::setSalesPrice(float salesPrice)
{
    this->salesPrice = salesPrice;
}
void Product::setPurchasePrice(float purchasePrice)
{
    this->purchasePrice = purchasePrice;
}
void Product::setDiscount(float discount)
{
    this->discount = discount;
}
int Product::getProductId()
{
    return this->productId;
}
int Product::getStockQuantity()
{
    return this->stockQantity;
}
int Product::getMinimumQuantity()
{
    return this->minimumQuantity;
}
string Product::getProductName()
{
    return this->productName;
}
float Product::getSalesPrice()
{
    return this->salesPrice;
}
float Product::getPurchasePrice()
{
    return this->purchasePrice;
}
float Product::getDiscount()
{
    return this->discount;
}