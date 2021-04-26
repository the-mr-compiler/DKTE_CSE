#include <iostream>

#include "Queue.h"
using namespace std;

Queue::Queue()
{
    this->front = -1;
    this->rear = -1;
}
int Queue::enqueue(int data)
{
    if (this->rear != SIZE - 1)
    {
        this->rear++;
        this->data[this->rear];
        return 1;
    }
    else
    {
        return 0;
    }
}
int Queue::dequeue()
{
    if (this->front == this->rear)
    {
        return 0;
    }
    else
    {
        int data = this->data[this->front];
        this->front++;
        if (front == rear)
        {
            front = rear = -1;
        }
        return data;
    }
}