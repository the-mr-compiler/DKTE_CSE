#include <iostream>
#include "Date.h"
#include "Address.h"
using namespace std;
class Person
{
private:
    string name;
    string email;
    string mobile;
    Date birthdate;
    Address address;

public:
    string getName();
    void setName(string name);
    string getEmail();
    void setEmail(string email);
    string getMobile();
    void setMobile(string mobile);
    Date getBirthdate();
    void setBirthdate(Date birthdate);
    Address getAddress();
    void setAddress(Address address);
    Person();
    Person(string name, Address address, string email, string mobile, Date birthdate);
    void acceptPersonDetails();
    void displayPersonDetails();
};