#include "LinkedList.h"

class Queue
{
private:
    LinkedList list;

public:
    int enqueue(int data);
    int dequeue();
};