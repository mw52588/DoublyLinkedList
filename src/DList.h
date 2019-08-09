#ifndef DLIST_H
#define	DLIST_H

#include <iostream>

template <typename T>
class DList
{
private:
    struct node
    {
        T data;
        node* prev;
        node* next;
		
		node(T &it, node *prevp, node *nextp) 
		{
			data = it;
			prev = prevp;
			next = nextp;
		}
		node(node *prevp, node *nextp) 
		{
			prev = prevp;
			next = nextp;
		} 
		
    };
    node* head;
    node* tail;
	
public:
    DList();
    DList(T d);

    bool isEmpty();
    void appendStart(T d);
    void append(T d);

    void removeFirst();
    void removeBack();

    void displayNode();

    void insertAfter(T k, T d);
    void insertBefore(T k, T d);
    void deleteNode(T n);

    void displayAll();
    ~DList();
   
};
#endif



