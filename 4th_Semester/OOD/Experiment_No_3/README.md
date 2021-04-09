## EXPERIMENT NO - 3

**Title**: Write a program to implement Date class in C++

**Objectives**:

1. To understand the concept of abstraction in C++.
2. To understand the concept of encapsulation in C++.

**Key Concepts**: access modifiers, accessor, mutator, abstraction, encapsulation

**Theory**:

**Access Modifiers:**
There are 3 types of access modifiers available in C++:

1. Public
2. Private
3. Protected

   **Public:** All the class members declared under public will be available to everyone. The data
   members and member functions declared public can be accessed by other classes too. The public
   members of a class can be accessed from anywhere in the program using the direct member
   access operator (.) with the object of that class.

   **Private:** The class members declared as private can be accessed only by the functions inside the
   class. They are not allowed to be accessed directly by any object or function outside the class.
   Only the member functions or the friend functions are allowed to access the private data
   members of a class.

   **Protected:** Protected access modifier is similar to that of private access modifiers, the difference
   is that the class member declared as Protected are inaccessible outside the class but they can be
   accessed by any subclass(derived class) of that class.

   **Accessor function** A member function of a class that only accesses (that is, does not modify the
   value(s) of the member variable(s)

   **Mutator function** A member function of a class that modifies the value(s) of the member
   variable(s)

   Because an accessor function only accesses the values of the member variables, as a
   safeguard we typically include the reserved word const at the end of the headings of these
   functions. A member function of a class is called a constant function if its heading contains the
   reserved word const at the end

**Encapsulation** (Data binding and Data Hiding)

Binding of data and code together is called “class is a basic unit of encapsulation”.
Gathering the implementation details together data binding and separating them from the
abstraction is called encapsulation. Data hiding (putting data into the private section of a class)
is an instance of encapsulation, and so is hiding functional details of an implementation in the
private section. Encapsulating data in the private section protects the integrity of the data and is
called data hiding. Thus using a class is the C++ way of making it easy to implement the OOP
features abstraction, data hiding, and encapsulation.

**Abstraction and Classes**

Life is full of complexities, and one way we cope with complexity is to frame simplifying
abstractions. You are a collection of more than an octillion atom. Some students of the mind
would say that your mind is a collection of semiautonomous agents. But it’s much simpler to
think of yourself as a single entity. In computing, abstraction is the crucial step of representing
information in terms of its interface with the user. That is, you abstract the essential operational
features of a problem and express a solution in those terms. In the softball statistics example,
the interface describes how the user initializes, updates, and displays the data. From abstraction,
it is a short step to the user-defined type, which in C++ is a class design that implements the
abstract interface.

Abstraction for the car that we drive, most of us want to know how to start the car and drive it
Most people are not concerned with the complexity of how the engine works. In other words,
abstraction focuses on what the engine does and not on how it works Abstraction is the process
of separating the logical properties from the implementation details

**Example** in Date class, the actual implementation of the operations, that is, the definitions of the
member functions of the was postponed. So, a data type that separates the logical properties
from the implementation details known as Abstract Data Type (ADT).

Is it a good practice to include the specification and implementation details of a class in
the program? Definitely not. Suppose the definition of the class and the definitions of the
member functions are directly included in the user’s program The user then has direct access to
the definition of the class and the definitions of the member functions. Therefore, the user can
modify the operations in any way the user pleases Thus we must hide the implementation details.
Hiding the implementation details frees the user from having to fit this extra piece of code in the
program Furthermore, once an object has been written, debugged, and tested properly, it
becomes (and remains) error free.

**Problem Statement:**

    Write a Date class having following attributes and functions:

**Program Analysis:**

    To implement Date in a program, the user must declare objects of type Date and know
    which operations are allowed and what the operations do. So the user must have access to the
    specification details. Because the user is not concerned with the implementation details, we must
    put those details in a separate file called an implementation file. Also, because the specification
    details can be too long. Therefore We must put the specification details in a separate file. The file
    that contains the specification details is called the header file (or interface file)

**Properties(Member variables):**

    day,month,year - declare all variables private

**Member functions:**

    constructors: supply following constructors
    No argument constructor: Date()
    overloaded constructors: Date( int d, int m,int y) - constructor having arguments for
    day,month and year

    setters and getters for member variables.
    incrementDate - increment current date by one day
    decrementDate -decrement current date by one day
    dateDiffience - find Difference between two dates, the first date is part of the object
    calling the function and second date is passed as argument

### Solution

- [Date.h](#Date.h)
- [Date.cpp](#Date.cpp)
- [main.cpp](#main.cpp)

##### [Date.h](https://raw.githubusercontent.com/mr-compilerMS/DKTE_CSE/master/4th_Semester/OOD/Experiment_No_3/Date.h)

```c
class Date
{
private:
    int day, month, year;

public:
    Date();
    Date(int dd, int mm, int yyyy);
    void setDate();
    void printDate();
    int getDay();
    int getMonth();
    int getYear();
    void setDay(int day);
    void setMonth(int month);
    void setYear(int year);
    void incrementDate();
    void decrementDate();
    void dateDifference(Date s);
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
};


```

##### [Date.cpp](https://raw.githubusercontent.com/mr-compilerMS/DKTE_CSE/master/4th_Semester/OOD/Experiment_No_3/Date.cpp)

```c
#include <iostream>
#include "Date.h"
using namespace std;

Date::Date()
{
    this->day = 1;
    this->month = 1;
    this->year = 2001;
};
Date::Date(int dd, int mm, int yyyy)
{
    this->day = dd;
    this->month = mm;
    this->year = yyyy;
}

void Date::setDate()
{
    cout << "Enter date in dd/mm/yyyy : ";
    cin >> this->day;
    cin.get();
    cin >> this->month;
    cin.get();
    cin >> this->year;
}
void Date::printDate()
{
    cout << endl
         << this->day << "/" << this->month << "/" << this->year << endl;
}

void Date::dateDifference(Date s)
{
    Date d;
    d.setDay(abs(this->day - s.getDay()));
    d.setMonth(abs(this->month - s.getMonth()));
    d.setYear(abs(this->year - s.getYear()));
    d.printDate();
}

void Date::incrementDate()
{
    this->day++;
    if (this->days[this->month - 1] < this->day)
    {
        this->month++;
        this->day = 1;
    }
    if (this->month > 12)
    {
        this->year++;
        this->month = 1;
    }
}

void Date::decrementDate()
{
    this->day--;
    if (this->day == 0)
    {
        this->month--;
        if (this->month == 0)
        {
            this->year--;
            this->month = 12;
        }
        this->day = this->days[this->month - 1];
    }
}

int Date::getDay()
{
    return this->day;
}
int Date::getMonth()
{
    return this->month;
}
int Date::getYear()
{
    return this->year;
}
void Date::setDay(int day)
{
    this->day = day;
}
void Date::setMonth(int month)
{
    this->month = month;
}
void Date::setYear(int year)
{
    this->year = year;
}

```

##### [main.cpp](https://raw.githubusercontent.com/mr-compilerMS/DKTE_CSE/master/4th_Semester/OOD/Experiment_No_3/main.cpp)

```c
#include <iostream>
using namespace std;
#include "Date.h"
int main()
{
    Date d1;
    d1.setDate();
    cout << "You entered : ";
    d1.printDate();
    d1.incrementDate();
    cout << "\nAfter increment : ";
    d1.printDate();
    d1.decrementDate();
    cout << "\nAfter decrement : ";
    d1.printDate();

    Date d2(8, 4, 2021);
    cout << "Difference between :";
    d2.printDate();
    cout << "and ";
    d1.printDate();
    cout << " is ";
    d1.dateDifference(d2);
}

```
