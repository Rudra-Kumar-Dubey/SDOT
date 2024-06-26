//implementation of stack with STL
#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int> s;
    int ch,v;
    cout<<"Enter 1 to push"<<endl;
    cout<<"Enter 2 to pop"<<endl;
    cout<<"Enter 3 to exit"<<endl;
    do
    {
        cout<<"Enter choice"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
            {
                cout<<"Enter An Element"<<endl;
                cin>>v;
                s.push(v);
                cout<<"Size of Stack is "<<s.size()<<endl;
                break;
            }
            case 2:
            {
                int e=s.top();
                s.pop();
                cout<<"the poped element is "<<e<<endl;
                break;
            }
            case 3:
            {
                cout<<"EXIT"<<endl;
                break;
            }
        default:
        {
            cout<<"Enter Valid Value\n"<<endl;
        }
        }
    }while(ch!=3);
    return 0;
}