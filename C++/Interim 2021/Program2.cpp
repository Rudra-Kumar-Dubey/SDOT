/*You are making an iPod playlist to hear the songs.
Assuming that shuffle functions are not applicable,choose 
an appropriate data structure that will add and delete songs on to
you’re your iPod in such away that the recently inserted song will
always be the first song currently on the iPod.*/

#include <iostream>
using namespace std;

int c;
struct node *p = NULL;

struct node
{
    string element;
    struct node *next;
};
struct node* head = NULL;
void insert(int new_data) {
   struct node* new_node = (struct node*) malloc(sizeof(struct node));
   new_node->element = new_data;
   new_node->next = head;
   head = new_node;
}

// Inserting element in beginning
void insert_begin(){
    string val;
    cout<<"Enter the song to be inserted in the playlist "<<endl;
    cin>>val;
    node* new_node = new node;
      new_node->element = val;
      new_node->next = NULL;
      if (head == NULL)
        head = new_node;
      else
      {
        new_node->next = head;
        head = new_node;
      }
    cout<<"Song Inserted at beginning of playlist\n"<<endl;
}

//Deleting the song from a position
void delete_pos()
{
    node *temp2, *temp1=head;
    int count=1, pos;
    cout<<"Enter the position of the song, to be deleted from the playlist:\n ";
    cin>>pos;
	while (count<pos-1)
    {         
        temp1 = temp1->next;
		count++;       
    }
    temp2=temp1->next;
    cout<<"song named - "<< temp2->element <<" is deleted\n"<<endl;
	temp1->next=temp2->next;
	delete temp2;
}

//Displaying the playlist
void display()
{
   struct node *temp;
    if (head == NULL)
    {
        cout<<"The playList is Empty"<<endl;
    }
    temp = head;
    cout<<"Songs in the playlist are: "<<endl;
    while (temp != NULL)
    {
        cout<<temp->element<<"->";
        temp = temp->next;
    }
    
}

int main(){
    cout << "Press 1 to create a playlist\n";
    int x;
    cin >> x;
    if (x == 1){
        int choice,cont=0;
        int pos,z;
        while (cont == 0){
            cout << "Press 1 to insert an song\n";
            cout << "Press 2 to delete an song\n";
            cin >> choice;
            switch (choice){
            case 1:
                insert_begin();
                display();
                break;
            case 2:
                delete_pos();
                display();
                choice=1;
                break;
            }
            cout<<"\nIf you want to continue enter 0 otherwise enter any other number\n";
            cin>>z;
            cont=z;
        }
    };
    return 0;
}