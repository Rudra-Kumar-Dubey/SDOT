/*IN THE SITUATION WHERE THERE ARE MULTIPLE USERS OR A NETWORK COMPUTER SYSTEM, 
YOU PROBABLY SHARE A PRINTER WITH OTHER USERS. WHEN YOU REQUEST TO PRINT A FILE, 
YOUR REQUEST IS ADDED TO THE PRINT QUEUE. WHEN YOUR REQUEST REACHES THE FRONT OF THE PRINT QUEUE, 
YOUR FILE IS PRINTED. THIS ENSURES THAT ONLY ONE PERSON AT A TIME HAS ACCESS TO THE PRINTER& 
THAT THIS ACCESS IS GIVEN ON A FIRST-COME, FIRST-SERVED BASIS. DESIGNAN ALGORITHM FOR THIS SCENARIO & 
IMPLEMENT YOUR ALGORITHM IN ANY PROGRAMMING LANGUAGES*/

#include <iostream>
#include <cstring>
#include <thread>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

struct Node *front, *rear, *newNode, *temp;

void createNode(int value){
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode-> data = value;
    newNode->next = NULL;
}

bool isEmpty(){
    if(front == NULL && rear == NULL)
        return true;
    else
        return false;
}

void peek(){
    if(isEmpty())
        cout << "The Queue is empty" << endl;
    else
        cout << front->data << endl;
}

void enqueue(int value){
    createNode(value);
    if(isEmpty())
        front = newNode;
    else
        rear->next = newNode;
    rear = newNode;
}

void dequeue(){
    if(isEmpty())
        cout << "Queue is empty. Dequeue not possible" <<endl;
    else{
        temp = front;
        front = front->next;
        if(temp->next == NULL)
            rear = NULL;
        free(temp);
    }
}

void addToPrint(){
    int filesToPrint;
    cout << "Enter file number: ";
    cin >> filesToPrint;
    enqueue(filesToPrint);
    cout << filesToPrint << " added to queue" << endl;
}

void print(){
    if(isEmpty())
        cout << "Print queue is empty" << endl;
    else{
        while(!isEmpty()){
            cout << "Printing " << front->data << endl;
            this_thread::sleep_for(std::chrono::seconds(2));
            cout << front->data << " successfully printed" << endl;
            dequeue();
        }
    }
}

int main() {
    int choice;
    while(true){
        cout << "========== PRINTER FUNCTIONS =========" <<endl;
        cout<< "1. ADD Files to print" << endl;
        cout<< "2. START Printing" << endl;
        cout<< "3. STOP Printing" << endl;
        cout << "=====================================" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        if(choice == 1){
            addToPrint();
        }
        else if(choice == 2){
            print();
        }
        else if(choice == 3){
            break;
        }
        else{
            cout << "Please enter a valid input" << endl;
        }
        cout << endl;
    }
    return 0;
}