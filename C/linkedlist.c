// A simple C program for
// traversal of a linked list

#include <stdio.h>
#include <stdlib.h>

typedef struct Node 
{
	int data;
	struct Node* next;
}yo;

// This function prints contents of linked list starting
// from the given node
void printList(struct Node* n)
{
	while (n != NULL) {
		printf(" %d ", n->data);
		n = n->next;
	}
}

// Driver's code
int main(void)
{
	yo* head = NULL;
	yo* second = NULL;
	yo* third = NULL;

	// allocate 3 nodes in the heap
	head = (yo*)malloc(sizeof(yo));
	second = (yo*)malloc(sizeof(yo));
	third = (yo*)malloc(sizeof(yo));

	head->data = 1; // assign data in first node
	head->next = second; // Link first node with second

	second->data = 2; // assign data to second node
	second->next = third;

	third->data = 3; // assign data to third node
	third->next = NULL;

	// Function call
	printList(head);

	return 0;
}
