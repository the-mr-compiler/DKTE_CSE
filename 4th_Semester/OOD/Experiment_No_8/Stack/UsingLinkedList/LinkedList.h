#include "Node.h"

class LinkedList
{
private:
    Node *head;

public:
    LinkedList();
    ~LinkedList();
    int attachAtEnd(int data);
    int detachFromEnd();

private:
    Node *createNode();
};
