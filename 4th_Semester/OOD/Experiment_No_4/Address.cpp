#include "Address.h"

Address::Address()
{
    this->city = "";
    this->country = "";
    this->district = "";
    this->pin = 0;
    this->state = "";
    this->street1 = "";
    this->street2 = "";
}

void Address::display()
{
    cout << "Address : \n\t" << this->street1 << "," << endl
         << "\t" << this->street2 << "," << endl
         << "\t"
         << "City : " << this->city << endl
         << "\t"
         << "District : " << this->district << endl
         << "\t"
         << "Country : " << this->country << endl
         << "\t"
         << "Pin : " << this->pin << endl;
}
void Address::intializeAddress()
{
    cout << "Street1 :";
    getline(cin, this->street1);
    cout << "Street2 :";
    getline(cin, this->street2);
    cout << "City :";
    cin >> this->city;
    cout << "District :";
    cin >> this->district;
    cout << "Country :";
    cin >> this->country;
    cout << "Pin :";
    cin >> this->pin;
}

string Address::getStreet1()
{
    return this->street1;
}

void Address::setStreet1(string street1)
{
    this->street1 = street1;
}

string Address::getStreet2()
{
    return this->street2;
}

void Address::setStreet2(string street2)
{
    this->street2 = street2;
}

string Address::getCity()
{
    return this->city;
}

void Address::setCity(string city)
{
    this->city = city;
}

string Address::getDistrict()
{
    return this->district;
}

void Address::setDistrict(string district)
{
    this->district = district;
}

string Address::getState()
{
    return this->state;
}

void Address::setState(string state)
{
    this->state = state;
}

string Address::getCountry()
{
    return this->country;
}

void Address::setCountry(string country)
{
    this->country = country;
}

int Address::getPin()
{
    return this->pin;
}

void Address::setPin(int pin)
{
    this->pin = pin;
}