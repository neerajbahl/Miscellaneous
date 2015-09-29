//============================================================================
// Name        : FIFO.cpp
// Author      : Neeraj Bahl
// Version     :
// Copyright   : 
// Description : FIFO Queue - Enqueue, Dequeue, Display
//============================================================================

#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

struct node {
	string str;
	struct node* next;
};

class Queue{
	struct node* head = NULL;
	struct node* tail = NULL;
	struct node* current = NULL;
public:
	Queue();
	void enqueue();
	void dequeue();
	void getHead();
	void printQueue();
};

int main()
{
	Queue newqueue;
	int choice;

	do
	{
	cout << "\n1. Enqueue \n2. Dequeue \n3. Get Head \n4. Print Queue \n5. Exit";
	cout << "\nEnter your choice: ";
	cin >> choice;

	switch(choice)
	{
	case 1:
		newqueue.enqueue();
		break;
	case 2:
		newqueue.dequeue();
		break;
	case 3:
		newqueue.getHead();
		break;
	case 4:
		newqueue.printQueue();
		break;
	case 5:
		exit(0);
		break;
	default:
		cout <<"\n Invalid Entry. Please try again";
		break;
	}
	} while(choice != 5);
	return 0;
}

Queue::Queue()
{
	head = NULL;
	tail = NULL;
	current = NULL;
}

void Queue::enqueue()
{
	string s;
	cout <<"\n Enter the name of the element to enqueue: \n";
	cin.ignore(1000, '\n');
	getline(cin, s);

	//string s = "test";

	struct node* temp = (struct node*) malloc(sizeof(struct node));
	temp -> str = s;
	temp -> next = NULL;
	if (head == NULL && tail == NULL)
	{
		head = temp;
		tail = temp;
	}
	else
	{
		tail -> next = temp;
	}
	tail = temp;
}

void Queue::getHead()
{
	if (head == NULL)
	{
		cout << "\nThe queue is empty";
	}
	else
	{
		cout << "\nThis is the head of the queue: " << head -> str;
	}

}

void Queue::dequeue()
{

	struct node* temp = (struct node*) malloc(sizeof(struct node));

	temp -> next = NULL;
	if (head == NULL)
	{
		cout << "\nThe queue is empty";
	}
	else
	{
		if (head != NULL)
		{
			temp = head;
			head = head -> next;
			delete temp;
		}
	}
}

void Queue::printQueue()
{
	current = head;
	if (head == NULL)
	{
		cout << "\nEmpty queue";
	}
	else
	{
		cout << "\n";
		cout << "{";
		while (current != NULL)
			{
				cout << current -> str;
				cout << "\t";
				current = current -> next;
			}
		cout << "}";
	}
}
