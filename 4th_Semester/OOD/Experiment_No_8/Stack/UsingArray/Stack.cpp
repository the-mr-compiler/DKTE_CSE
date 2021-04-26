#include "Stack.h"

Stack::Stack()
{
    this->top = -1;
}
int Stack::push(int data)
{
    if (this->top == SIZE - 1)
    {
        return 0;
    }
    else
    {
        this->top++;
        this->data[this->top] = data;
        return 1;
    }
}
int Stack::pop()
{
    if (this->top == -1)
    {
        return 0;
    }
    else
    {
        this->top--;
        return this->data[this->top + 1];
    }
}