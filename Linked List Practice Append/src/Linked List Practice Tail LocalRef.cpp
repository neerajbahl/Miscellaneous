//============================================================================
// Name        : Linked.cpp
// Author      : Neeraj Bahl
// Version     :
// Copyright   : 
// Description : Linked List Append Nodes
//============================================================================

#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
	{
		int	data;
		struct node* next;
	};
int Length(struct node* headref);
void Print(struct node* headref);

int main()
{
		int i;
		struct node* newNode;
		struct node** headref;
		struct node* current = *headref;

		for (i = 1; i < 9; i++)
		{
			newNode = (struct node*) malloc(sizeof(struct node));
			newNode -> data = i;
			newNode -> next = NULL;

			if (*headref == NULL)
			{
				*headref = newNode;
			}
			else
			{
				while (current -> next != NULL)
				{
					current = current -> next;
				}
				current -> next = newNode;
			}
		}


		// Print the Node
		Print (*headref);

		// Calculating the length of the Linked List
		int count;
		count = Length(*headref);
		cout << "\nThe length of the Linked List is: " << count;

	return 0;
}


int Length(struct node* headref)
{
	struct node* current = headref;
	int count = 0;

	while (current!= NULL)
	{
		count++;
		current = current -> next;
	}

	return count;
}


void Print(struct node* headref)
{
	struct node* current = headref;

	while (current!= NULL)
	{
		cout << "\nNode is: " << current -> data;
		cout << "\nNode is pointing to : " << current -> next;
		current = current -> next;
	}
}
