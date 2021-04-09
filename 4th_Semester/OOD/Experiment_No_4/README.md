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

#### Date.h

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

#### Date.cpp

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

#### Address.h

```c
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

```

#### Address.cpp

```c
#include "Address.h"

Address::Address()
{
    this->city="";
    this->country="";
    this->district="";
    this->pin=0;
    this->state="";
    this->street1="";
    this->street2="";
}

void Address::display(){
    cout<<"Address : \n\t"<<this->street1<<","<<endl<<"\t"<<this->street2<<","<<endl<<"\t"<<"City : " <<this->city<<endl<<"\t"<<"District : "<<this->district<<endl<<"\t"<<"Country : "<<this->country<<endl<<"\t"<<"Pin : "<<this->pin<<endl;
}
void Address::intializeAddress(){
    cout<<"Street1 :";
    getline(cin,this->street1);
    cout<<"Street2 :";
    getline(cin,this->street2);
    cout<<"City :";
    cin>>this->city;
    cout<<"District :";
    cin>>this->district;
    cout<<"Country :";
    cin>>this->country;
    cout<<"Pin :";
    cin>>this->pin;
}
```

#### Person.h

```c
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

```

#### Person.cpp

```c
#include "Person.h"

Person::Person(){}
Person::Person(string name,Address address,string email,string mobile,Date birthdate){
    this->name=name;
    this->address=address;
    this->email=email;
    this->mobile=mobile;
    this->birthdate=birthdate;
}

void Person::acceptPersonDetails(){
    cout<<"EnterName :";
    getline(cin,this->name);
    cout<<"Address:";
    this->address.intializeAddress();
    cout<<"Email :";
    cin>>this->email;
    cout<<"Mobile No :";
    cin>>this->mobile;
    cout<<"Birtdate :";
    this->birthdate.setDate();
}

void Person::displayPersonDetails(){
    cout<<"\nPerson Details :";
    cout<<"\nName :"<<this->name<<endl;
    this->address.display();
    cout<<"\nEmail :"<<this->email;
    cout<<"\nMobile :"<<this->mobile;
    cout<<"\nBirthdate :";
    this->birthdate.printDate();
}

```

#### Product.h

```c
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
```

#### Product.cpp

```c
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
```

#### main.cpp

```c
#include "Person.h"
#include "Product.h"
int main()
{
    Person per;
    Product prd;
    per.acceptPersonDetails();
    per.displayPersonDetails();
    prd.intialiseProduct();
    prd.displayProduct();
}

```
