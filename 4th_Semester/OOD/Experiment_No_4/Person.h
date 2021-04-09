#include <iostream>
#include "Date.h"
#include "Address.h"
using namespace std;
class Person{
    private:
        string name,email,mobile;
        Date birthdate;
        Address address;

    public:
        Person();
        Person(string name,Address address,string email,string mobile,Date birthdate);
        void acceptPersonDetails();
        void displayPersonDetails();
};