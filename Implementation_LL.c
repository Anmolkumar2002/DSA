// A simple C program for
// Create a linked list

#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* link;
};
int main()
{	// Create first node.
	struct node *head=malloc(sizeof(struct node));
	head->data=43;
	head->link=NULL;

	// Create 2nd node.
	struct node *current=malloc(sizeof(struct node));
	current->data=98;
	current->link=NULL;
	head->link=current;

	// Create 3rd node.
	struct node *current2=malloc(sizeof(struct node));
	current2->data=8;
	current2->link=NULL;
	current->link=current2;



	//Method 2:-
	/*
	// Create first node.
	struct node *head=malloc(sizeof(struct node));
	head->data=43;
	head->link=NULL;

	// Create 2nd node.
	struct node *current=malloc(sizeof(struct node));
	current->data=98;
	current->link=NULL;
	head->link=current; // *Vvi* head->link->link *Vvi*

	// Create 3rd node.
	current=malloc(sizeof(struct node));
	current->data=8;
	current->link=NULL;
	*/
    return 0;
}
