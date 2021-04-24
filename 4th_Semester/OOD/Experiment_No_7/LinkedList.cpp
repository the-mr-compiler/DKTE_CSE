#include <iostream>
#include "LinkedList.h"
using namespace std;
LinkedList::LinkedList()
{
    this->head = NULL;
}

int LinkedList::initalizeNode(Node *n)
{
    cout << "\nEnter Data : ";
    cin >> n->data;
    return 1;
}

int LinkedList::attachAtBegin()
{
    Node *temp;
    temp = this->createNode();
    if (temp != NULL)
    {
        initalizeNode(temp);
        if (this->head == NULL)
            this->head = temp;
        else
        {
            temp->next = head;
            head = temp;
        }
        return 1;
    }
    return 0;
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
int LinkedList::detachGiven(int data)
{
    if (head == NULL)
        return 0;
    Node *temp, *prev;
    temp = prev = head;
    if (head->data == data)
    {
        head = head->next;
        free(temp);
    }
    else
    {
        while (temp->data != data)
        {
            prev = temp;
            temp = temp->next;
            if (temp == NULL)
                break;
        }
        if (temp == NULL)
        {
            data = 0;
        }
        else if (temp->data == data)
        {
            prev->next = temp->next;
            free(temp);
        }
    }
    return data;
}

int LinkedList::attachAfter(int data)
{
    Node *temp;
    temp = head;
    if (head == NULL)
    {
        cout << "\nSearch data not found..";
        return 0;
    }
    while (temp->data != data)
    {
        temp = temp->next;
        if (temp == NULL)
            break;
    }
    if (temp == NULL)
    {
        cout << "\nSearch data not found..";
        return 0;
    }
    else
    {
        Node *t;
        t = this->createNode();
        if (t != NULL)
        {
            this->initalizeNode(t);
            t->next = temp->next;
            temp->next = t;
            return data;
        }
    }
    return 0;
}

int LinkedList::attachAtEnd()
{
    Node *temp, *temp2;
    temp = this->createNode();
    if (temp != NULL)
        if (initalizeNode(temp))
        {
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

void LinkedList::traverse()
{
    Node *temp;
    temp = head;
    if (temp == NULL)
    {
        cout << "\n\nList is empty.";
        return;
    }
    cout << "\n\nTraversing :";
    while (temp != NULL)
    {
        cout << "\t" << temp->data;
        temp = temp->next;
    }
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

void LinkedList::deleteList()
{
    Node *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}