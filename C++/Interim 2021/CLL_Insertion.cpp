//Insertion in Circular Linked List
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
};

struct Node *addToEmpty(struct Node *last, int data)  //funtion to add the element in the list when it is empty
{
	// This function is only for empty list
	if (last != NULL)
	return last;

	// Creating a node dynamically.
	struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
	temp -> data = data;
	last = temp;
	last -> next = last;

	return last;
}

struct Node *addBegin(struct Node *last, int data) //function to insert in the beg
{
	if (last == NULL)
		return addToEmpty(last, data);

	struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
	temp -> data = data;
	temp -> next = last -> next;
	last -> next = temp;

	return last;
}

struct Node *addEnd(struct Node *last, int data) //function to insert in the end
{
	if (last == NULL)
		return addToEmpty(last, data);
	
	struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
	temp -> data = data;
	temp -> next = last -> next;
	last -> next = temp;
	last = temp;

	return last;
}



struct Node *addpos(struct Node* last,int data, int pos)//function to insert element at specific position
{
    struct Node *newnode, *curNode;
    int i;

    if(last == NULL)
    {
        cout<<"List is empty";
    }
    else
    {
        newnode = (struct Node *)malloc(sizeof(struct Node));
        newnode->data = data;
        curNode = last;
        for(i=0; i<=pos-1; i++)
        {
            curNode = curNode->next;
        }
        newnode->next = curNode->next;
        curNode->next = newnode;
    }
    return last;
}

void traverse(struct Node *last)
{
	struct Node *p;

	if (last == NULL)
	{
		cout << "List is empty." << endl;
		return;
	}

	p = last -> next;

	do
	{
		cout << p -> data << " ";
		p = p -> next;

	}
	while(p != last->next);

}
int main()
{
	struct Node *last = NULL;

	last = addToEmpty(last, 6);
	last = addBegin(last, 4);
	last = addBegin(last, 2);
	last = addEnd(last, 8);
	last = addEnd(last, 12);
    last = addpos(last,20,4);

	traverse(last);

	return 0;
}

