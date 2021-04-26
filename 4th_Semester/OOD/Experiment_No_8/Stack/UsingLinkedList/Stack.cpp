#include "Stack.h"

int Stack::push(int data)
{
    return list.attachAtEnd(data);
}
int Stack::pop()
{
    return list.detachFromEnd();
}