#include "Node.h"

class LinkedList
{
private:
    Node *head;

public:
    LinkedList();
    ~LinkedList();
    int attachAtBegin();
    int attachAfter(int data);
    int attachAtEnd();
    int detachFromBegin();
    int detachFromEnd();
    int detachGiven(int data);
    void traverse();
    void deleteList();

private:
    Node *createNode();
    int initalizeNode(Node *n);
};
