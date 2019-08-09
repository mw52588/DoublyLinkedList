#include <cstdlib>
#include <iostream>
#include "DList.h"

using namespace std;

template <class T>
DList<T>::DList()
{
    head = 0;
    tail = 0;
}

template <class T>
DList<T>::DList(T d)
{
    head = 0;
    tail = 0;
}

template <class T>
bool DList<T>::isEmpty()
{
    return head == NULL;
}

template <class T>
void DList<T>::appendStart(T d)
{
    node *newNode;
    if(isEmpty())
    {
        tail = newNode;
    }
    else
    {
        head->prev = newNode;
    }
    newNode->next = head;
    head = newNode;
}

template <class T>
void DList<T>::append(T d)
{
    node *newNode;
    if(isEmpty())
    {
        head = newNode;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
    }
    tail = newNode;
}

template <class T>
void DList<T>::removeFirst()
{
    node *temp;
    temp= head;
    if(head->next == NULL)
    {
        tail = NULL;
    }
    else
    {
        head->next->prev = NULL;
    }
    head = head->next;
    return temp;
}

template <class T>
void DList<T>::removeBack()
{
    node *temp;
    temp= tail;
    if(head->next == NULL)
    {
        head = NULL;
    }
    else
    {
        tail->prev->next = NULL;
    }
    tail = tail->prev;
    return temp;
}

template <class T>
void DList<T>:: insertAfter(T k, T d)
{
    node *curr;
    curr= head;
    while (curr->data != k)
    {
        curr = curr->next;
    }
    if(curr == NULL)
    {
        return false;
    }
    node newNode = new node(d);

    if(curr == tail)
    {
        newNode->next = NULL;
        tail = newNode;
    }
    else
    {
        newNode->next = curr->next;
        curr->next->prev = newNode;
    }
    newNode->prev = curr;
    curr->next = newNode;
    return true;
}

template <class T>
void DList<T>::deleteNode(T n)
{
    node *curr;
    curr = head;
    while(curr->data != n)
    {
        curr = curr->next;
        if(curr == NULL)
        {
            return NULL;
        }
    }

    if(curr == head)
    {
        head = curr->next;
    }
    else
    {
        curr->prev->next = curr->next;
    }
    if(curr == tail)
    {
        tail = curr->prev;
    }
    else
    {
        curr->next->prev = curr-> prev;
        return curr;
    }
}

template <class T>
void DList<T>:: displayAll()
{
    node *curr;
    curr = head;
    while (curr != NULL)
    {
        cout  << " ";
        curr = curr->next;
    }
    cout << endl;
}

template <class T>
DList<T>::~DList()
{
    while (head != NULL)
    {
        node *curr;
        curr = head;
        head = head->next;
        delete curr;
    }
}
