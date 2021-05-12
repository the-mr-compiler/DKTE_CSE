**Title:** Write a program to implement operator overloading for extraction operator >> and insertion operator << .

**Objectives:**

1. To study the use of friend function.

**Key Concepts:** insertion, extraction operator, friend function.

**Theory:**

**C++ Friend function**

- If a function is defined as a friend function in C++, then the protected and private data of a class can be accessed using the function.
- By using the keyword friend compiler knows the given function is a friend function.
- For accessing the data, the declaration of a friend function should be done inside the body
  of a class starting with the keyword friend.
- Example :

```c++
#include <iostream>
using namespace std;
class Box
{
    private:
        int length;
    public:
        Box():length(0){}
        friend int printLength(Box);
};
int printLength(Box b)
{
    b.length+=10;
    return b.length;
}
int main()
{
    Box b;
    cout<<"Length of box:"<<printLength(b)<<endl;
    return 0;
}
```

**extraction >> and insertion << operator overload:**

In C++, stream insertion operator “<<” is used for output and extraction operator “>>” is used for input.

We must know following things before we start overloading these operators.

1. cout is an object of ostream class and cin is an object istream class
2. These operators must be overloaded as a global function. And if we want to allow them to access private data members of class, we must make them friend.

Why these operators must be overloaded as global?

In operator overloading, if an operator is overloaded as member, then it must be a member of the object on left side of the operator. For example, consider the statement “ob1 + ob2” (let ob1
and ob2 be objects of two different classes). To make this statement compile, we must overload ‘+’ in class of ‘ob1’ or make ‘+’ a global function.

The operators ‘<<' and '>>' are called like 'cout << ob1' and 'cin >> ob1'. So if we want to make them a member method, then they must be made members of ostream and istream classes, which is not a good option most of the time. Therefore, these operators are overloaded as global functions with two parameters, cout and object of user defined class.

**Problem Statement:**

Write a Matrix class to implement operator overloading for following operator: +, - ,\* , << ,>>

**Program Analysis:**

Matrix should be stored in a dynamic array

1. constructor - provide non parameterized and parameterized constructor to take size of a
   matrix
2. provide copy constructor
3. provide operator overloading for extraction >> operator to accept the matric input and
   insertion << operator to display the matrix elements.
4. provide operator overloading to carry out addition, subtraction and multiplication of
   matrices - overload + , - and \* operators
5. throw exceptions when operations carried out on incorrect size matrices
6. destructor - to deallocate memory allocated for matrix.
