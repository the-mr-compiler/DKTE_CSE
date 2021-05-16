#include <iostream>
using namespace std;
template <typename T>
class Stack
{
private:
    T *data;
    int top, size;

public:
    Stack(int size);
    int push(T data);
    T pop();
};

template <typename T>
Stack<T>::Stack(int size)
{
    this->top = -1;
    this->data = new T[size];
    this->size = size;
}
template <typename T>
int Stack<T>::push(T data)
{
    if (this->top == size - 1)
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
template <typename T>
T Stack<T>::pop()
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