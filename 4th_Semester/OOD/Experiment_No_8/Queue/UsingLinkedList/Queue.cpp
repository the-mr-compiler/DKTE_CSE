#include <iostream>

#include "Queue.h"
using namespace std;

int Queue::enqueue(int data)
{
    return this->list.attachAtEnd(data);
}
int Queue::dequeue()
{
    return this->list.detachFromBegin();
}