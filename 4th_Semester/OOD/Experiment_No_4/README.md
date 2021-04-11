## EXPERIMENT NO - 4

**Title**: Write a program to implement class in C++

**Objectives**:

1. To understand the concept of class and object
2. To understand the concept of constructor and destructor.

**Key Concepts**: class, object, constructor, destructor.

**Theory**:

In Object oriented design (OOD), the first step is to identify the components, called objects. An object combines data and the operations on that data in a single unit. In C++, the mechanism that allows you to combine data and the operations on that data in a single unit is called a class. A class is a collection of a fixed number of components. The components of a class are called the members of the class.

The general syntax for defining a class is: class

    class classidentifier
    {
    Classmemberlist;
    };

in which classMembersList consists of variable declarations and/or functions. That is, a member of a class can be either a variable (to store data) or a function.

- If a member of a class is a variable, you declare it just like any other variable. Also, in the definition of the class, you cannot initialize a variable when you declare it.
- If a member of a class is a function, you typically use the function prototype to declare
  that member.

The members of a class are classified into three categories: private, public, and protected. In C++, private, protected, and public are reserved words and are called member access specifiers.

Following are some facts about public and private members of a class:

- By default, all members of a class are private.
- If a member of a class is private, you cannot access it outside of the class.
- A public member is accessible outside of the class.
- To make a member of a class public, you use the member access specifier public with a colon:

**Accessing Class Members**

Once an object of a class is declared, it can access the members of the class. The general syntax for an object to access a member of a class is:

    classObjectName.memberName

The class members that a class object can access depend on where the object is declared.

- If the object is declared in the definition of a member function of the class, then the object can access both the public and private members.
- If the object is declared elsewhere (for example, in a user’s program), then the object can access only the public members of the class.

In C++, **the dot, (period)**, is an operator called the **member access operator**.

**Class Scope**

A class object can be either automatic (that is, created each time the control reaches its declaration and destroyed when the control exits the surrounding block) or static (that is, created once, when the control reaches its declaration, and destroyed when the program terminates). Also, you can declare an array of class objects. A class object has the same scope as other variables. A member of a class has the same scope as a member of a struct. That is, a member of a class is local to the class. You access a class member outside of the class by using the class object name and the member access operator (.).

**Functions and Classes**

The following rules describe the relationship between functions and classes:

- Class objects can be passed as parameters to functions and returned asfunction values.
- As parameters to functions, class objects can be passed either by value or by reference.
- If a class object is passed by value, the contents of the member variables of the actual parameter are copied into the corresponding member variables of the formal parameter.

**Constructors and Destructors:**

Constructors and destructors are two special kinds of member functions. In general, a constructor is a member function with the same name as the class. A constructor is the first method that is called implicitly when an object is created. They are used to initialize data and provide the guarantee that the data is always valid.

A destructor is the method that is called each time the object dies or exceeds its lifetime. It has the same name as the name of the class, prefixed with a ~ (character tilde). They are used to perform any cleanup activity for data members whose memory is allocated dynamically.

**For the above example**

    myClassA() ; //constructor
    ~myClassA(); //destructor constructors and destructors need to have public scope.

_Constructors can be overloaded, to support different ways of object initialization._

**Problem Statement:**

1. Write a Address class with following attributes and functions:
2. A Person class having following attributes and functions
3. A Product class having following attributes and functions

**Program analysis:**

#### 1. For Address class :

**Properties (Member variables):**

    street1, street2, city, pin, district, state, country - declare all variables private

**Member Functions:**

    No argument constructor: Address() - initialize all member variables (assign string types to " " (blank and int types to 0)
    intializeAddrees - take all address values from user.
    Display – display the address

#### 2. For Person class :

**Member variables:**

    name, address( of type Address class), email, mobile, birthdate( type Date)

**Member Functions**

    constructor
    non parameterized and Parameterized constructor - Person(name, address, email, mobile, birthdate)
    acceptPersonDetails()
    displayPersonDetails()

#### 3. For Product class :

**Member variables:**

    productId, ProductName, purchasePrice, salePrice, discount, stockQuantity, minimumQuantity

**Member Functions**

    constructor
    non parameterized
    initialiseProduct()
    displayProductInfo()

### Solution

1. [Date.h](#Date.h)
2. [Date.cpp](#Date.cpp)
3. [Address.h](#Address.h)
4. [Address.cpp](#Address.cpp)
5. [Person.h](#Person.h)
6. [Person.cpp](#Person.cpp)
7. [Product.h](#Product.h)
8. [Product.cpp](#Product.cpp)
9. [main.cpp](#main.cpp)

#### [Date.h](https://raw.githubusercontent.com/mr-compilerMS/DKTE_CSE/master/4th_Semester/OOD/Experiment_No_4/Date.h)

```c
class Date
{
    private:
        int day,month,year;
    public:
        Date();
        Date(int d,int m,int y);
        void setDate();
        void printDate();
        int getDay() ;
        int getMonth();
        int getYear();
        void setDay(int day);
        void setMonth(int month);
        void setYear(int year);
        int calculateAge(Date currentDate);
};

```

#### [Date.cpp](https://raw.githubusercontent.com/mr-compilerMS/DKTE_CSE/master/4th_Semester/OOD/Experiment_No_4/Date.cpp)

```c
#include <iostream>
#include "Date.h"
using namespace std;

Date::Date(){};
Date::Date(int d,int m,int y){
    this->day=d;
    this->month=m;
    this->year=y;
}

void Date::setDate(){
    cout<<"Enter date in dd/mm/yyyy : ";
    cin>>this->day;
    cin.get();
    cin>>this->month;
    cin.get();
    cin>>this->year;
}
void Date::printDate(){
    cout<<this->day<<"/"<<this->month<<"/"<<this->year<<endl;
}

int Date::getDay(){
    return this->day;
}
int Date::getMonth(){
    return this->month;
}
int Date::getYear(){
    return this->year;
}
void Date::setDay(int day){
    this->day=day;
}
void Date::setMonth(int month){
    this->month=month;
}
void Date::setYear(int year){
    this->year=year;
}
int Date::calculateAge(Date currentDate){
    return currentDate.getYear()-this->getYear();
}
```

#### [Address.h](https://raw.githubusercontent.com/mr-compilerMS/DKTE_CSE/master/4th_Semester/OOD/Experiment_No_4/Address.h)

```c
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


```

#### [Address.cpp](https://raw.githubusercontent.com/mr-compilerMS/DKTE_CSE/master/4th_Semester/OOD/Experiment_No_4/Address.cpp)

```c
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
```

#### [Person.h](https://raw.githubusercontent.com/mr-compilerMS/DKTE_CSE/master/4th_Semester/OOD/Experiment_No_4/Person.h)

```c
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

```

#### [Person.cpp](https://raw.githubusercontent.com/mr-compilerMS/DKTE_CSE/master/4th_Semester/OOD/Experiment_No_4/Person.cpp)

```c
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

```

#### [Product.h](https://raw.githubusercontent.com/mr-compilerMS/DKTE_CSE/master/4th_Semester/OOD/Experiment_No_4/Product.h)

```c
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
```

#### [Product.cpp](https://raw.githubusercontent.com/mr-compilerMS/DKTE_CSE/master/4th_Semester/OOD/Experiment_No_4/Product.cpp)

```c
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
```

#### [main.cpp](https://raw.githubusercontent.com/mr-compilerMS/DKTE_CSE/master/4th_Semester/OOD/Experiment_No_4/main.cpp)

```c
#include "Person.h"
#include "Product.h"
int main()
{
    Person per;
    Product prd;

    cout << endl
         << "Enter Person Details :" << endl;
    per.acceptPersonDetails();

    cout << endl
         << "Enter Product Details :" << endl;
    prd.intialiseProduct();

    cout << endl
         << "You Entered : " << endl;
    per.displayPersonDetails();
    prd.displayProduct();
}


```
