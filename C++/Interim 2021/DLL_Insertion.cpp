//Insertion in Double Linked List
#include <iostream>
using namespace std;
struct node {
   int data;
   struct node *prev;
   struct node *next;
};

struct node* addtoempty(struct node* head, int data) //funtion to add the element in the list when it is empty
{
    struct node* temp = (struct node*) malloc(sizeof(struct node));
  
   temp->data = data;
   temp->prev = NULL;
   temp->next = NULL;
   head  = temp;
   return temp;
}

struct node* addatbeg(struct node* head, int data)//function to insert in the beg
{
    struct node* temp = (struct node*) malloc(sizeof(struct node));
   temp->data = data;
   temp->prev = NULL;
   temp->next = NULL;
   temp->next = head;
   head->prev = temp;
   head = temp;
   return temp;
   
}
 
struct node* addatend(struct node* head, int data)//function to insert in the end
{
    struct node* tail;
    struct node* temp = (struct node*) malloc(sizeof(struct node));
  
   temp->data = data;
   temp->prev = NULL; //creating a new node
   temp->next = NULL;
   tail = head;
   while(tail->next !=NULL)
   {
       tail = tail->next;
       
   }tail->next = temp;
   temp->prev = tail;
   return head;
   
}

struct node* addatpos(struct node* head, int data, int pos)//function to insert at a postion
{
    struct node* newnode = NULL;
    struct node* temp = head;
    // struct node* temp2 =NULL;
    newnode = addtoempty(newnode, data);
    int i = 1;
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    newnode->prev = temp;
    newnode->next= temp->next;
    temp->next->prev= newnode;
    temp->next= newnode;
    // head = temp;
    return head;
}

void traverse(struct node* head, struct node* ptr){
    ptr = head;   //help us in printing the data of linked list
    while(ptr!= NULL)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
}

 
int main() { struct node* head = NULL;
    struct node * ptr;
    head = addtoempty(head, 45);
    head = addatbeg(head, 23);
    head = addatend(head, 8);
    head = addatend(head, 4);
    head = addatend(head, 22);
    head = addatpos(head, 10, 3);
    traverse(head, ptr);
    return 0;
}