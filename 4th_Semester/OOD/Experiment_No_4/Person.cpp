#include "Person.h"

Person::Person() {}
Person::Person(string name, Address address, string email, string mobile, Date birthdate)
{
    this->name = name;
    this->address = address;
    this->email = email;
    this->mobile = mobile;
    this->birthdate = birthdate;
}

void Person::acceptPersonDetails()
{
    cout << "EnterName :";
    getline(cin, this->name);
    cout << "Address:";
    this->address.intializeAddress();
    cout << "Email :";
    cin >> this->email;
    cout << "Mobile No :";
    cin >> this->mobile;
    cout << "Birtdate :";
    this->birthdate.setDate();
}

void Person::displayPersonDetails()
{
    cout << "\nPerson Details :";
    cout << "\nName :" << this->name << endl;
    this->address.display();
    cout << "\nEmail :" << this->email;
    cout << "\nMobile :" << this->mobile;
    cout << "\nBirthdate :";
    this->birthdate.printDate();
}
string Person::getName()
{
    return this->name;
}
void Person::setName(string name)
{
    this->name = name;
}
string Person::getEmail()
{
    return this->email;
}
void Person::setEmail(string email)
{
    this->email = email;
}
string Person::getMobile()
{
    return this->mobile;
}
void Person::setMobile(string mobile)
{
    this->mobile = mobile;
}
Date Person::getBirthdate()
{
    return this->birthdate;
}
void Person::setBirthdate(Date birthdate)
{
    this->birthdate = birthdate;
}
Address Person::getAddress()
{
    return this->address;
}
void Person::setAddress(Address address)
{
    this->address = address;
}