/* Implement the following operations on the stack using linked list data structure. 
 * In  addition to the usual operations of the stack and the linked list, your implementation should handle two more operations.
o Split(p(i1,i2,i3…ip),q(j1,j2,…jq)) in the stack, where the stack of length n will be split in two stacks, 
 * each of length p and q such that p+q=n. Here the index ik+1 need not be equalto ik+1,, where 1≤k≤p and the index ji+1 
 * need not be equalto ji+1, where 1≤i≤q.
o Given two stacks p and q , Combine((p(i1,i2,i3…ip),q(j1,j2,…jq)) into one stack of  length p+q=n. 
 * The new stack should contain the elements of the stacks p and q in any combination. */

#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

class Stack{
public:
    Node *head;
    Node *tail;

    Stack(){
        head = NULL;
        tail = NULL;
    }
};

//Pushing the elements into the stack
void push(Stack *stack, int data){
    cout << "Entering " << data << " into the stack" <<  endl;
    Node* new_node = new Node();
    new_node-> data = data;
    new_node-> next = stack->head;
    if(stack->head == NULL)
        stack->tail = new_node;
    stack->head = new_node;
}

//Deleting the top element from the stack
void pop(Stack *stack){
    if(stack->head == NULL){
        cout << "Underflow"<<endl;
    }
    Node *new_node = stack->head;
    stack->head = stack->head->next;
    int popped = new_node->data;
    cout << "Popped out: "<< popped <<endl;
    delete new_node;
}

//Displaying the top item in the stack
void peek(Stack *stack){
    if(stack->head == NULL){
        cout << "The stack is empty" << endl;
    }
    cout << "\nTop Element: " << stack->head->data << endl;
}

//Merging the two stacks
void merge_stacks(Stack *stack1, Stack *stack2){
    cout << "\nMerging the stacks . . . " << endl;
    if(stack1->head == NULL){
        stack1->head = stack2->head;
        return;
    }
    stack1->tail->next = stack2->head;
}

//Displaying the stack
void display(Stack* stack) {
    cout << "\nDisplaying the Stack: " <<endl;
    Node* temp = stack->head;
    if(stack->head == 0){
        cout << "Stack is empty"<<endl;
    }
    while(temp != 0){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

//Dividing the stack into two parts
void split_Stack(Stack* stack1, Stack* sub_set1, Stack* sub_set2, int p, int q){
    int n = 0;
    Node* temp;
    temp = stack1->head;
    while(temp != NULL){
        n += 1;
        temp = temp->next;
    }
    if(p +q >n || p + q < n){
        cout << "Split can not happen" << endl;
    }
    else{
        Node* ptr = stack1-> head;
        while(q > 0){
            push(sub_set1, ptr->data);
            ptr = ptr->next;
            q -= 1;
        }
        
        while(ptr != NULL){
            push(sub_set2, ptr->data);
            ptr = ptr->next;
        }
    }
}


int main() {
    Stack *stack1 = new Stack();
    Stack *stack2 = new Stack();
 
    push(stack1, 40);
    push(stack1, 50);
    push(stack1, 60);
    push(stack1, 70);
    push(stack1, 700);
    display(stack1);
    push(stack2, 10);
    push(stack2, 20);
    push(stack2, 30);
    push(stack2, 4);
    push(stack2, 5);
    peek(stack2);
    pop(stack2);
    display(stack2);
    merge_stacks(stack1, stack2);
    display(stack1);
    peek(stack1);
    Stack* sub_set1 = new Stack();
    Stack* sub_set2 = new Stack();
    split_Stack(stack1, sub_set1, sub_set2, 4, 5);
    display(sub_set1);
    cout << endl;
    display(sub_set2);
}