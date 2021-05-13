## EXPERIMENT NO : 15

**Title:** Write a program to implement class template.

**Objectives:** To write a code for generic class using class template.

**Key Concepts:** class template, stack

**Theory:**

Class Templates Like function templates, class templates are useful when a class defines
something that is independent of data type. Can be useful for classes like LinkedList, BinaryTre,
Stack, Queue, Array, etc

**Example:**

```c++
#include <iostream>
using namespace std;
template <typename T>
class Array {

private:
    T *ptr;
    int size;
public:
    Array (T arr [ ], int s) ;
    void print() ;
};

template <typename T>
Array<T>::Array (T arr[], int s) {
    ptr = new T[s];
    size = s;
    for (int i = 0; i < size; i++)
        ptr[i] = arr[i];
}

template <typename T>
void Array <T>: : print() {
    for (int i = 0; i < size; i++)
    cout< <" "<<*(ptr + i);
    cout< <endl;
}

int main() {
    int arr [5] = {1,2,3, 4,5};
    Array<int> a(arr, 5);
    a.print() ;
    return 0;
}

```

We can pass more than one data types as arguments to templates. we can specify default arguments to templates

**Problem Statement :**

    Write a program to implement stack using class template.

**Program Analysis:**

- Create a class template for class
- Perform push and pop operations for stack
- Test the program for any data type.
