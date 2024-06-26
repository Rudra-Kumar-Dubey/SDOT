//Deletion in Double Linked List
#include <iostream>
using namespace std;
struct node {
   int data;
   struct node *prev;
   struct node *next;
};

struct node* addtoempty(struct node* head, int data)//funtion to add the element in the list when it is empty
{
    struct node* temp = (struct node*) malloc(sizeof(struct node));
  
   temp->data = data;
   temp->prev = NULL;
   temp->next = NULL;
   head  = temp;
   return temp;
}
 
struct node* add(struct node* head, int data)//To add a element at end
{
    struct node* ptr = head;
    struct node* temp = (struct node*) malloc(sizeof(struct node));
  
   temp->data = data;
   temp->prev = NULL;  //creating a new node
   temp->next = NULL;
   
   while(ptr->next !=NULL)
   {
       ptr = ptr->next;
       
   }
   ptr->next = temp;
   temp->prev = ptr;
   return head;
   
}


struct node* delfirst(struct node * head) //function to delete at beg
{
    struct node* temp = head;
    head = head->next;
    free(temp);
    head->prev= NULL;
    return head;
}
struct node* dellast(struct node * head) //function to delete at end
{
    struct node* temp = head;
    struct node * ptr;
    while(temp->next !=NULL)
    {
        temp  =temp->next;
    }
    ptr = temp->prev;
    ptr->next = NULL;
    free(temp);
    
    return head;
}

struct node* delatpos(struct node* head, int pos)  //function to delete at a position 
{
    
    struct node* temp = head;
   
    int i = 1;
    while(i<pos)
    {
        temp=temp->next;
        i++;
    }
    temp->next->prev = temp->prev;
    temp->prev->next = temp->next;
    free(temp);
    
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
 
int main() { 
    struct node* head = NULL;
    struct node* ptr;
    head = addtoempty(head, 2);
    head = add(head, 34);
    head = add(head, 26);
    head = add(head, 14);
    head = add(head, 57);
    head = add(head, 37);
    head = add(head, 13);

    cout<<"Before Deleting Elements\n";
    traverse(head, ptr);

    head = delfirst(head);
    head = dellast(head);
    head = delatpos(head, 3);

    cout<<"\nAfter Deleting Elements\n";
    traverse(head, ptr);
    return 0;
}