//============================================================================
// Name        : Linked.cpp
// Author      : Neeraj Bahl
// Version     :
// Copyright   : 
// Description : To practice Linked List concept, iterating through the linked list using head to calculate length & print and to add nodes to the Tail with Dummy Node
//============================================================================

#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
	{
		int	data;
		struct node* next;
	};
int Length(struct node* dummy);
void Print(struct node* dummy);
void Push (struct node*& head, int data);

int main()
{
		int i;
		struct node dummy;
		struct node* tail = &dummy;

		// 3 Step Link In Function to add Nodes to Head

		for (i = 1; i < 9; i++)
		{
			Push ((tail -> next), i);
			tail = tail -> next;
		}

		// Print the Node
		Print (dummy.next);

		// Calculating the length of the Linked List
		int count;
		count = Length(dummy.next);
		cout << "\nThe length of the Linked List is: " << count;

	return 0;
}


int Length(struct node* dummy)
{
	struct node* current = dummy;
	int count = 0;

	while (current!= NULL)
	{
		count++;
		current = current -> next;
	}

	return count;
}


void Print(struct node* dummy)
{
	struct node* current = dummy;

	while (current!= NULL)
	{
		cout << "\nNode is: " << current -> data;
		cout << "\nNode is pointing to : " << current -> next;
		current = current -> next;
	}
}

void Push (struct node*& tail, int data)
{
	struct node* newNode = (struct node*) malloc(sizeof(struct node)); //Allocate
	newNode -> data = data;

	newNode -> next = NULL; // Link Next

	tail = newNode; // Link Head
}
