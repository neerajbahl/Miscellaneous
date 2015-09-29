//============================================================================
// Name        : Linked.cpp
// Author      : Neeraj Bahl
// Version     :
// Copyright   : 
// Description : To practice Linked List concept, iterating through the linked list using head to calculate length & print and to add nodes to the Head
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

		struct node* head = NULL;
		struct node* second = NULL;
		struct node* third = NULL;

		head = (struct node*) malloc(sizeof(struct node));
		second = (struct node*) malloc(sizeof(struct node));
		third = (struct node*) malloc(sizeof(struct node));

		head -> data = 6;
		head -> next = second;


		second -> data = 7;
		second -> next = third;


		third -> data = 8;
		third -> next = NULL;


		// 3 Step Link In Function to add Nodes to Head
		Push(head, 5);
		Push(head, 4);
		Push(head, 3);

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

	newNode -> next = head; // Link Next

	head = newNode; // Link Head
}
