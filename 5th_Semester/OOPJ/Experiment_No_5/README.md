# Experiment No.: 05

**Title:**
Write a program to demonstrate single inheritance by creating a class Person
and deriving classes Student & Employee from it. Define class person having data
members name, birthdate, height, weight, address and calculateAge method.
Derive class Student with members as roll no, marks, calculateAvg().Also derive
class Employee with members as empId, salary, calculateTax().

**Objectives:** 1. To learn inheritance.

**Theory:**

Inheritance in java is a mechanism in which one object acquires all the properties and
behaviors of parent object.
The idea behind inheritance in java is that you can create new classes that are built upon
existing classes. When you inherit from an existing class, you can reuse methods and fields of
parent class, and you can add new methods and fields also.
Inheritance represents the IS-A relationship, also known as parent-child relationship.
Syntax of Java Inheritance

```java
 class Subclass-name extends Superclass-name
 {
    //methods and fields
 }
```

The extends keyword indicates that you are making a new class that derives from an existing
class. The meaning of "extends" is to increase the functionality.
In the terminology of Java, a class which is inherited is called parent or super class and the
new class is called child or subclass.
Single Inheritance Example

    File: TestInheritance.java

```java
class Animal{
    void eat()
    {
        System.out.println("eating...");
    }
}
class Dog extends Animal{
    void bark()
    {
        System.out.println("barking...");
    }
}
class TestInheritance{
    public static void main(String args[]){
        Dog d=new Dog();
        d.bark();
        d.eat();
    }
}
```

**Output:**

    barking...
    eating...

**Key concepts:** inheritance, extends

**Algorithm:**

1. Create class Person having data members name, birthdate, height, weight, address and
   calculateAge method.
2. Create classes Student and Employee which will extend Person class
3. Derive class Student with members as roll no, marks, calculateAvg().
4. Also derive class Employee with members as empId, salary, calculateTax().
5. Create InheritanceTest class consisting main method for creating the objects of the
   Person/Student/Employee classes.
6. Demonstrate the access of properties and behaviors of Person class in Student and
   Employee class.
