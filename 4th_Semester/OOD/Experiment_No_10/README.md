## EXPERIMENT NO - 10

**Title:** Write a program to implement + and - operator overloading.

**Objectives:**

1. To understand the concept of operator overloading.

**Key Concepts:** Operator Overloading

**Theory:**

Operator overloading is one of the most exiting features of OOP. It can transform complex,
obscure program listing into intuitively obvious ones

**For example:** <code>d3.addobjects(d1, d2); </code>

Can be changed to much more readable d3 = d1 + d2;
The term operator loading refers to giving the normal C++ operators such as +, \*, additional
meanings when they are applied to user defined data types. It gives you the opportunity to
redefine the C++ language. Another kind of operation data type conversion is closely connected
with operator overloading

Syntax for Operator Functions

The result of an operation is a value. Therefore, the operator function is a value-returning
function.

<u>**GENERAL SYNTAX TO OVERLOAD THE BINARY (ARITHMETIC OR RELATIONAL)**</u>

**OPERATORS AS MEMBER FUNCTIONS**

    Function Prototype (to be included in the definition of the class):
    returnType operator # (const className&) const;

in which # stands for the binary operator, arithmetic or relational, to be overloaded; returnType
is the type of value returned by the function; and className is the name of the class for which the operator is being overloaded.

**Function Definition:**

    returnType className::operator# (const className& otherObject) const
    { //algorithm to perform the operation
        return value;
    }

In C++, **operator** is a **reserved word**.

Recall that the only built-in operations on classes are assignment (=) and member selection. To
use other operators on class objects, they must be explicitly overloaded. Operator overloading
provides the same concise expressions for user-defined data types as it does for built-in data
types.

To overload an operator for a class:

1. Include the statement to declare the function to overload the operator (that is, the operator function) prototype in the definition of the class.
2. Write the definition of the operator function.

**Overloading an Operator: Some Restrictions**

When overloading an operator, keep the following in mind:

1. You cannot change the precedence of an operator.
2. The associativity cannot be changed. (For example, the associativity of the arithmetic
   operator addition is from left to right, and it cannot be changed.) 3. Default parameters
   cannot be used with an overloaded operator.
3. You cannot change the number of parameters an operator takes.
4. You cannot create new operators. Only existing operators can be over-loaded.
5. The operators that cannot be overloaded are . .\* :: ?: sizeof
6. The meaning of how an operator works with built-in types, such as int, remains the same.
7. Operators can be overloaded either for objects of the user-defined types, or for a
   combination of objects of the user-defined type and objects of the built-in type.

Member or Nonmember

For all except four operators, the operator function can be defined as a class member, or just as
a file scope(global) function.

**Problem Statement:**

    Write a complex number class to perform the addition and subtraction of complex objects using + and - operator overloading respectively.

**Program Analysis:**

    1. constructor - provide constructor to take real and imaginary parts of a complex number
    2. provide copy constructor
    3. provide operator overloading to carry out addition and subtraction of complex numbers - overload + and – operators
