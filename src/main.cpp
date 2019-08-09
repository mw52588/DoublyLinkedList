/*
 * main.cpp
 *
 *  Created on: Feb 8, 2019
 *      Author: Matt
 */
// Project: Doubly_Linked_List.cbp
// File   : main.cpp
#include <iostream>

using namespace std;

struct node {
 	int data;
 	node *next;
 	node *prev;
 };

	void PrintForward(node *head);

int main()
{


    node *head;
    node *tail;
    node *newNode;

    newNode = new node;
    newNode->data = 1;
    newNode->prev = NULL;
    head = newNode;
    tail = newNode;

    newNode = new node;
    newNode->data = 2;
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;

    newNode = new node;
    newNode->data = 3;
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;

    newNode = new node;
    newNode->data = 4;
	newNode->prev = tail;
	tail->next = newNode;
	tail = newNode;
	tail->next = NULL;


	PrintForward(head);
    return 0;
}

void PrintForward(node* head) {

	node *temp = head;
	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;

}



