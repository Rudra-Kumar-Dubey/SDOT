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






void DeleteAtPosition(struct Node** head, int pos) //function to delete at a position
{
	// Find length of list
	int len = Length(*head);
	int count = 1;
    pos = pos - 1;
	struct Node *previous = *head, *next = *head;

	if (*head == NULL) {
		printf("\nDelete Last List is empty\n");
		return;
	}

	if (pos >= len || pos < 0) {
		printf("\npos is not Found\n");
		return;
	}
	while (len > 0) {
		if (pos == count) {
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
	Insert(&head, 8);
	Insert(&head, 5);
	Insert(&head, 9);
	Insert(&head, 11);
	Insert(&head, 20);
	// Deleting Node at position
	printf("Before Deleting At Postion: ");
	Display(head);
	printf("\nAfter Deleting node at pos 3: ");
	DeleteAtPosition(&head, 4);
	Display(head);

	return 0;
}