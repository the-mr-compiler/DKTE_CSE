#include "Product.h"

void Product::intialiseProduct(){
    cout<<"\nId :";
    cin>>this->productId;
    cin.get();
    cout<<"Name :";
    getline(cin,this->productName);
    cout<<"Purchase Price :";
    cin>>this->purchasePrice;
    cout<<"Sales Price :";
    cin>>this->salesPrice;
    cout<<"Discount :";
    cin>>this->discount;
    cout<<"Stock Quantity :";
    cin>>this->stockQantity;
    cout<<"Minimum Stock :";
    cin>>this->minimumQuantity;
}

void Product::displayProduct(){
    cout<<"\nProduct Details :";
    cout<<"\nId :"<<this->productId;
    cout<<"\nName :"<<this->productName;
    cout<<"\nPurchase Price :"<<this->purchasePrice;
    cout<<"\nSales Price :"<<this->salesPrice;
    cout<<"\nDiscount :"<<this->discount;
    cout<<"\nStock Quantity :"<<this->stockQantity;
    cout<<"\nMinimum Stock :"<<this->minimumQuantity;
}