#include <iostream>
#include "LinkedList.h"
using namespace std;
LinkedList::LinkedList()
{
    this->head = NULL;
}

int LinkedList::detachFromBegin()
{
    Node *temp;
    temp = head;
    if (head != NULL)
    {
        head = head->next;
        int data = temp->data;
        free(temp);
        return data;
    }
    else
    {
        return 0;
    }
}
int LinkedList::attachAtEnd(int data)
{
    Node *temp, *temp2;
    temp = this->createNode();
    if (temp != NULL)

    {
        temp->data = data;
        temp2 = head;
        if (this->head == NULL)
        {
            head = temp;
            cout << endl
                 << "Attached at end successfully";
        }
        else
        {
            while (temp2->next != NULL)
            {
                temp2 = temp2->next;
            }
            temp2->next = temp;
            cout << endl
                 << "Attached at end successfully";
        }
    }
    else
        return 0;
    return 1;
}

Node *LinkedList::createNode()
{
    //return new Node();
    Node *n;
    n = (Node *)malloc(sizeof(Node));
    n->next = NULL;
    return n;
}

LinkedList::~LinkedList()
{
    Node *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}
