#include <iostream>
using namespace std;
class Address
{
    private:
        string street1,street2,city,district,state,country;
        int pin;
    public:
        Address();
        void intializeAddress();
        void display();
};
