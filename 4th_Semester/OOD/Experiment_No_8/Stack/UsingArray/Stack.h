#include <iostream>
using namespace std;
#define SIZE 10
class Stack
{
private:
    int data[SIZE];
    int top;

public:
    Stack();
    int push(int data);
    int pop();
};