//============================================================================
// Name        : Linked.cpp
// Author      : Neeraj Bahl
// Version     :
// Copyright   : 
// Description : To practice Linked List concept, iterating through the linked list using head to calculate length & print and to add nodes to the Tail
//============================================================================

#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
	{
		int	data;
		struct node* next;
	};
int Length(struct node* head);
void Print(struct node* head);
void Push (struct node*& head, int data);

int main()
{
		int i;
		struct node* head = NULL;
		struct node* tail;

	//	head = (struct node*) malloc(sizeof(struct node));
	//	tail = (struct node*) malloc(sizeof(struct node));

		// 3 Step Link In Function to add Nodes to Head
		Push(head, 1);
		tail = head;

		for (i = 2; i < 9; i++)
		{
			Push ((tail -> next), i);
			tail = tail -> next;
		}

		// Print the Node
		Print (head);

		// Calculating the length of the Linked List
		int count;
		count = Length(head);
		cout << "\nThe length of the Linked List is: " << count;

	return 0;
}


int Length(struct node* head)
{
	struct node* current = head;
	int count = 0;

	while (current!= NULL)
	{
		count++;
		current = current -> next;
	}

	return count;
}


void Print(struct node* head)
{
	struct node* current = head;

	while (current!= NULL)
	{
		cout << "\nNode is: " << current -> data;
		cout << "\nNode is pointing to : " << current -> next;
		current = current -> next;
	}
}

void Push (struct node*& head, int data)
{
	struct node* newNode = (struct node*) malloc(sizeof(struct node)); //Allocate
	newNode -> data = data;

	newNode -> next = NULL; // Link Next

	head = newNode; // Link Head
}
