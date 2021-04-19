## EXPERIMENT NO - 1

**Title**: Write a program to implement function and structure in C++..

**Objectives**:

1. To understand the basic of structure and function in C++.
2. To understand use of function and structure.

   **Key Concepts**: function prototype, arguments, function call, function definition, structure

   **Theory**:

   **What is Function:**

   - A function is a **block of code** that **performs some operation**.
   - A function can optionally define **input parameters** that enable **callers to pass arguments** into the function.
   - A function can optionally **return a value as output**.
   - Functions are useful for **encapsulating common operations** in a **single reusable block**.
   - Ideally with **a name that clearly describes** what the function does.

   **To use a C++ function, you must do the following:**

   - Provide a function definition.
   - Provide a function prototype.
   - Call the function.

If you’re using a library function, the function has already been defined and compiled for you.
Also, you can use a standard library header file to provide the prototype. All that’s left to do is
call the function properly. For example, the standard C library includes the **strlen()** function for
finding the length of the string. The associated standard header file **cstring** contains the function
prototype for **strlen()** and several other string-related functions.

But when you create your own functions, you have to handle all three aspects— **prototyping**, **defining**, and **calling**—yourself

**Example 1:**

```c
// calling. cpp -- defining, prototyping, and calling a function
#include <iostream>
using namespace std;

void simple( ); // function prototype

int main( )
{
	cout << "main() will call the simple() function: \n";
	simple(); // function call
	return 0;
}
// function definition
void simple ( )
{
	cout << "I'm but a simple function. \n";
}

```

Here’s the output of the program **main()** will call the **simple()** function:

**Output:** I’m but a simple function.

You can group functions into two categories:

- Function that don’t have return values. Functions without return values are termed type **void** functions

- Function that return values.

**Example 2**: In below example cheers and cube two functions are given.

- The cheers function takes int as internal parameter but doesn’t return any value.
- The cube function takes double as internal parameter and return cube of given number in the form of double. So, double is return type of cube function.

```c
#include <iostream>
using namespace std;
void cheers (int); // prototype: no return value
double cube (double x); // prototype: returns a double
int main(void)
{
	cheers (5); // function call
	cout << "Give me a number: ";
	double side;
	cin > > side;
	double volume = cube(side); // function call

	cout << "A " << side <<"-foot cube has a volume of ";
	cout << volume << " cubic feet. \n";
	cheers (cube(2) ); // prototype protection at work
	return 0;
}
void cheers (int n) // definition of function cheers
{
	for (int i = 0; i < n; i++)
		cout << "Cheers!";
	cout << endl;
}
double cube(double x) // definition of function cube
{
	return x * x * x;
}
```

**What Prototypes Do for You:**
They greatly reduce the chances of program errors. In particular, prototypes ensure the following:

- The compiler correctly handles the function return value.
- The compiler checks that you use the correct number of function arguments.
- The compiler checks that you use the correct type of arguments. If you don’t, it converts the arguments to the correct type, if possible.

**What is structure :**

A structure is a user-defined data type in C/C++. A structure creates a data type that can be used to group items of possibly different types into a single type.
The _‘struct’_ keyword is used to create a structure. The general syntax to create a structure is as
shown below:

```c
struct structureName{
	member1;
	member2;
	member3;
	.
	.
	.
	memberN;
};

```

Structures in C++ can contain two types of members:

**Data Member:** These members are normal C++ variables. We can create a structure with
variables of different data types in C++.

**Member Functions:** These members are normal C++ functions. Along with variables, we can
also include functions inside a structure declaration.

**Problem Statement:**

**1. Write a program to declare and use a date structure.**

**Program Analysis**: Declare date structure as

```c
struct date
{
	short day;
	int month;
	int year;
}
```

**Write functions to implement the following operations:**

1. Accept date from user and store it in structure variable.
2. Print addresses of each structure member.
3. Display date in the different formats as dd-mm-yyyy, dd-MMM-yyyy,
   dd/mm/yy ( here MMM is month abbreviation in 3 characters such as JAN)
4. Difference between two dates.
5. increment day and month

### Solution

- [date.h](#date.h)
- [date_fun.h](#date_fun.h)
- [date_fun.cpp](#date_fun.cpp)
- [main.cpp](#date_fun.cpp)

##### [date.h](https://raw.githubusercontent.com/mr-compilerMS/DKTE_CSE/master/4th_Semester/OOD/Experiment_No_1/date.h)

```c
struct date
{
    short day, month, year;
};

```

#### [date_fun.h](https://raw.githubusercontent.com/mr-compilerMS/DKTE_CSE/master/4th_Semester/OOD/Experiment_No_1/date_fun.h)

```c
void setDate(struct date *d);
struct date difference(struct date f, struct date s);
void getDate(struct date);
void print(struct date);
void printAddress(struct date *d);
void incrementDate(struct date *d, int day, int m);

```

##### [date_fun.cpp](https://raw.githubusercontent.com/mr-compilerMS/DKTE_CSE/master/4th_Semester/OOD/Experiment_No_1/date_fun.cpp)

```c
#include <iostream>
#include <iomanip>
#include "date.h"
using namespace std;
int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
char mon[12][5] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

void setDate(struct date *d)
{

    cout << "Enter date in dd/mm/yyyy format :";
    cin >> d->day;
    cin.get();
    cin >> d->month;
    cin.get();
    cin >> d->year;
}

void print(struct date d)
{
    cout << setfill('0');
    cout << "\ndd-mm-yyyy :" << setw(2) << d.day << '-' << setw(2) << d.month << '-' << setw(4) << d.year;
    cout << "\ndd-MMM-yyyy :" << setw(2) << d.day << '-' << setw(2) << mon[d.month - 1] << '-' << setw(4) << d.year;
    cout << "\ndd-mm-yyyy :" << setw(2) << d.day << '/' << setw(2) << d.month << '/' << setw(2) << (d.year % 100);
}

void printAddress(struct date *d)
{
    cout << endl
         << "Address of date: " << d << endl
         << "Address of date.day: " << &d->day << endl
         << "Address of date.month: " << &d->month << endl
         << "Address of date.year:" << &d->year << endl;
}

struct date difference(struct date f, struct date s)
{
    struct date d;

    if (f.month != s.month)
    {
        if (f.month > s.month)
        {
            d = f;
            f = s;
            s = d;
        }
        d.month = (s.month - 1) - (f.month);
        d.day = (days[f.month - 1] - f.day) + d.day;
    }
    else
    {
        d.month = s.month - f.month;
        d.day = f.day - s.day;
    }
    d.year = f.year - s.year;
    d.day = abs(d.day);
    d.month = abs(d.month);
    d.year = abs(d.year);
    return d;
}

void getDate(struct date d)
{
    cout << setfill('0');
    cout << "\ndd-mm-yyyy :" << setw(2) << d.day << '-' << setw(2) << d.month << '-' << setw(4) << d.year;
}
void incrementDate(struct date *d, int day, int m)
{
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    d->day += day;
    if (days[d->month - 1] < d->day)
    {
        d->day = d->day - days[d->month - 1];
        d->month++;
    }
    d->month += m;
    if (d->month > 12)
    {
        d->month -= 12;
        d->year++;
    }
}
```

##### [main.cpp](https://raw.githubusercontent.com/mr-compilerMS/DKTE_CSE/master/4th_Semester/OOD/Experiment_No_1/main.cpp)

```c
#include "date.h"
#include "date_fun.h"
#include "iostream"
using namespace std;
int main()
{
    struct date d;
    setDate(&d);
    struct date d1;
    int day, month;
    int choice;
    while (choice != 6)
    {
        cout << "\n1. Accept date\n2. Print address\n3. Display date in multiple formats\n4. Find difference\n5. Increment date\n6. Exit\n\nEnter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            setDate(&d);
            break;
        case 2:
            printAddress(&d);
            break;

        case 3:
            print(d);
            break;

        case 4:
            setDate(&d1);
            d1 = difference(d, d1);
            cout << "\nDifference is : " << d1.day << " Days, " << d1.month << " Months and " << d1.year << " Years\n";
            break;

        case 5:
            cout << "Enter date and month to increment date(in dd/mm format) :";
            cin >> day;
            cin.get();
            cin >> month;
            incrementDate(&d, day, month);
            cout << "\nAfter increment : ";
            getDate(d);
            break;

        case 6:
            break;
        default:
            break;
        }
    }
}
```
