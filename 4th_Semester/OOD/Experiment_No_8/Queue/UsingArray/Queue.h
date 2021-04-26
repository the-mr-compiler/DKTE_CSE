#define SIZE 10
class Queue
{
private:
    int data[SIZE];
    int front, rear;

public:
    Queue();
    int enqueue(int data);
    int dequeue();
};