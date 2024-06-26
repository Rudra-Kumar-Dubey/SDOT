//Deletion in Circular Linked List
#include <bits/stdc++.h>
using namespace std;

// structure for a node
struct Node {
	int data;
	struct Node* next;
};

void Insert(struct Node** head, int data)
{
	struct Node* current = *head;

	struct Node* newNode = new Node;

	if (!newNode) {
		printf("\nMemory Error\n");
		return;
	}

	newNode->data = data;

	if (*head == NULL) {
		newNode->next = newNode;
		*head = newNode;
		return;
	}

	else {

		while (current->next != *head) {
			current = current->next;
		}

		newNode->next = *head;

		current->next = newNode;
	}
}


void Display(struct Node* head) // Function print data of list
{
	struct Node* current = head;

	if (head == NULL) {
		printf("\nDisplay List is empty\n");
		return;
	}

	else {
		do {
			printf("%d ", current->data);
			current = current->next;
		} while (current != head);
	}
}

int Length(struct Node* head) // Function return number of nodes present in list
{
	struct Node* current = head;
	int count = 0;

	if (head == NULL) {
		return 0;
	}

	else {
		do {
			current = current->next;
			count++;
		} while (current != head);
	}
	return count;
}


void DeleteFirst(struct Node** head) //function to delete at beg
{
	struct Node *previous = *head, *next = *head;

	if (*head == NULL) {
		printf("\nList is empty\n");
		return;
	}

	if (previous->next == previous) {
		*head = NULL;
		return;
	}

	while (previous->next != *head) {

		previous = previous->next;
		next = previous->next;
	}

	previous->next = next->next;

	*head = previous->next;
	free(next);

	return;
}


void DeleteLast(struct Node** head) //function to delete at end
{
	struct Node *current = *head, *temp = *head, *previous;

	if (*head == NULL) {
		printf("\nList is empty\n");
		return;
	}

	if (current->next == current) {
		*head = NULL;
		return;
	}

	while (current->next != *head) {
		previous = current;
		current = current->next;
	}

	previous->next = current->next;
	*head = previous->next;
	free(current);

	return;
}


void DeleteAtPosition(struct Node** head, int index) //function to delete at a position
{
	// Find length of list
	int len = Length(*head);
	int count = 1;
	struct Node *previous = *head, *next = *head;

	if (*head == NULL) {
		printf("\nDelete Last List is empty\n");
		return;
	}

	if (index >= len || index < 0) {
		printf("\nIndex is not Found\n");
		return;
	}
	if (index == 0) {
		DeleteFirst(head);
		return;
	}
	while (len > 0) {
		if (index == count) {
			previous->next = next->next;
			free(next);
			return;
		}
		previous = previous->next;
		next = previous->next;
		len--;
		count++;
	}
	return;
}
int main()
{
	struct Node* head = NULL;
	Insert(&head, 45);
	Insert(&head, 63);
	Insert(&head, 7);
	Insert(&head, 20);
	Insert(&head, 34);
	Insert(&head, 10);
	Insert(&head, 55);

	// Deleting Node at position
	printf("Before Deleting At Postion: ");
	Display(head);
	printf("\nAfter Deleting node at index 3: ");
	DeleteAtPosition(&head, 3);
	Display(head);

	// Deleting first Node
	printf("\n\nBefore Deleting At Start: ");
	Display(head);
	printf("\nAfter Deleting first node: ");
	DeleteFirst(&head);
	Display(head);

	// Deleting last Node
	printf("\n\nBefore Deleting At End: ");
	Display(head);
	printf("\nAfter Deleting last node: ");
	DeleteLast(&head);
	Display(head);

	return 0;
}
