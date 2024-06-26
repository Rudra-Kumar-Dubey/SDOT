/*"Given a linked list and a number k. Write an algorithm to reverse every k nodes in the list.
Example :
Input:  1->2->3->4->5->6  and k = 3
Output: 3->2->1->6->5->4" */

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

Node* reverse(Node* head, int k){
    if(!head)
        return NULL;
    Node* current = head;
    Node* next = NULL;
    Node* prev = NULL;
    int count = 0;
    
    while (current != NULL && count < k) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }
    
    if (next != NULL)
        head->next = reverse(next, k);
        return prev;
}

//Pushing the elements
void push(Node** head_ref, int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

//Printing the list 
void printList(Node* node){
    while(node != NULL){
        cout << node->data << " ";
        node = node->next;
    }
}

int main() {
    Node* head = NULL;
    
    push(&head, 6);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);
    
    cout << "Given linked list \n";
    printList(head);
    head = reverse(head, 3);
    
    cout << "\nReversed Linked list \n";
    printList(head);
    cout << endl;
    
    return 0;
}