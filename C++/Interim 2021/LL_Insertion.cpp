//Insertion in Linked List
#include <stdio.h>
#include <stdlib.h>

struct Node
{
int data;
struct Node *next;
};

void Insert_Beg(struct Node** head_ref, int new_data) //function to insert in the beg
{
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

	new_node->data = new_data;

	new_node->next = (*head_ref);

	(*head_ref) = new_node;
}


void
Insert_Pos(struct Node* head,int data, int pos)//function to insert element at specific position
{
    struct Node *newnode, *curNode;
    int i;

    if(head == NULL)
    {
        printf("List is empty");
    }
    else
    {
        newnode = (struct Node *)malloc(sizeof(struct Node));
        newnode->data = data;
        curNode = head;
        for(i=0; i<=pos-3; i++)
        {
            curNode = curNode->next;
        }
        newnode->next = curNode->next;
        curNode->next = newnode;
    }
}

void Insert_End(struct Node** head_ref, int new_data) //function to insert in the end
{

	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

	struct Node *last = *head_ref; 

	new_node->data = new_data;

	new_node->next = NULL;

	if (*head_ref == NULL)
	{
	*head_ref = new_node;
	return;
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;
    
}

void printList(struct Node *node) //function to display the list
{
while (node != NULL)
{
	printf(" %d ", node->data);
	node = node->next;
}
}

int main()
{
struct Node* head = NULL;

Insert_End(&head, 6);
Insert_Beg(&head, 7);
Insert_Beg(&head, 1);
Insert_End(&head, 4);
Insert_Pos(head, 5, 3);

printf("\n Linked list is: ");
printList(head);

return 0;
}
