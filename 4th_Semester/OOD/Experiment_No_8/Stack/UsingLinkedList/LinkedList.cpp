#include <iostream>
#include "LinkedList.h"
using namespace std;
LinkedList::LinkedList()
{
    this->head = NULL;
}

int LinkedList::detachFromEnd()
{
    Node *temp, *prev;
    temp = prev = head;
    int data = 0;
    if (head != NULL)
    {
        if (head->next == NULL)
        {
            data = head->data;
            free(head);
            head = NULL;
        }
        else
        {
            while (temp->next != NULL)
            {
                prev = temp;
                temp = temp->next;
            }
            data = temp->data;
            free(temp);
            prev->next = NULL;
        }
    }
    return data;
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
        }
        else
        {
            while (temp2->next != NULL)
            {
                temp2 = temp2->next;
            }
            temp2->next = temp;
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