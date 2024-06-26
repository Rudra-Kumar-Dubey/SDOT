//STL.....in c++
//Standard Template Library
//1.containers --> stores your data in a data structure/template/container--array
//2.iterations --> iterate data in a container x[10]
//3.algorithms --> which are already implmented in library of c++
/*
stack.....
Its a collection of value/elements
LIFO  Mechanism - Last In First Out
//stack of books
push -> to add element to stack
pop ->  to remove an element from stack
top -> -1 (when stack is empty)
push--top++
stack[top]=5; stack[0]=5
push(150)
---> top=3
push(200)
size=4
top=0,1,2,3
top<=size-1
0<=3
1<=3
2<=3
3<=3
4<=3 // stackoverflow
In a Queue is FIFO / LILO
*/
//STACK PROGRAM
#include<iostream>
using namespace std;
int stack[10],n=10,top=-1;
void push(int v)  //remember about stack overflow
{
    if(top>=n-1)
    {
        cout<<"Stack is overflown"<<endl;
    }
    else
    {
        top++;
        stack[top]=v;
    }
}
void pop()  //remember about stack underflow
{
    if(top<=-1)
    {
        cout<<"Stack is underflown"<<endl;
    }
    else
    {
        cout<<"The poped element is"<<stack[top]<<endl;
        top--;       
    }
}
void disp()
{
    if(top>=0)
    {
        cout<<"HERE ARE THE ELEMENTS OF STACK"<<endl;
        for(int i=top;i>=0;i--)
        {
            cout<<stack[i]<<endl;
        }    
    }
    else
    {
        cout<<"stack have no elements"<<endl;
    }
}
int main()
{
    int ch,v;
    cout<<"Enter 1 to push"<<endl;
    cout<<"Enter 2 to pop"<<endl;
    cout<<"Enter 3 to display"<<endl;
    cout<<"Enter 4 to exit"<<endl;
    do
    {
        cout<<"Enter your Choice"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
            {
                cout<<"Enter an element to push"<<endl;
                cin>>v;
                push(v);
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                disp();
                break;
            }
            case 4:
            {
                cout<<"Exit"<<endl;
                break;
            }
        default:
        {
            cout<<"Enter Valid Value\n"<<endl;
        }
        }
    }while(ch!=4);
    return 0;
}