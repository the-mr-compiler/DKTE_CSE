#include <iostream>
using namespace std;
class Address
{
private:
    string street1;
    string street2;
    string city;
    string district;
    string state;
    string country;
    int pin;

public:
    string getStreet1();
    void setStreet1(string street1);
    string getStreet2();
    void setStreet2(string street2);
    string getCity();
    void setCity(string city);
    string getDistrict();
    void setDistrict(string district);
    string getState();
    void setState(string state);
    string getCountry();
    void setCountry(string country);
    int getPin();
    void setPin(int pin);
    Address();
    void intializeAddress();
    void display();
};
