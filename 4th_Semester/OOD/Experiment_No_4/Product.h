#include <iostream>

using namespace std;

class Product{
    private :
        int productId,stockQantity,minimumQuantity;
        string productName;
        float salesPrice,purchasePrice,discount;
    public:
        void intialiseProduct();
        void displayProduct();
};