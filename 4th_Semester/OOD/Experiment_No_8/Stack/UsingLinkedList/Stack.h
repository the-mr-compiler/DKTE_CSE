#include <iostream>
#include "LinkedList.h"

class Stack
{
private:
    LinkedList list;

public:
    int push(int data);
    int pop();
};