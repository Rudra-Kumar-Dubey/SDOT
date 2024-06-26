#include <bits/stdc++.h>
#include <iostream>

using namespace std;

#define MAX 1000

class Stack {

public:
    int top;
	int a[MAX]; // Maximum size of Stack
	Stack() { top = -1; }
	bool push(char x);
	int pop();
	bool isEmpty();
    bool areBracketsBalanced(string expr);
};

bool Stack::push(char x)
{
	if (top >= (MAX - 1)) {
		cout << "Stack Overflow";
		return false;
	}
	else {
		a[++top] = x;
		cout << x << " pushed into stack\n";
		return true;
	}
}

int Stack::pop()
{
	if (top < 0) {
		cout << "Stack Underflow";
		return 0;
	}
	else {
		char x = a[top--];
        cout << x << " poped out of stack\n";
		return x;
	}
}

bool Stack::isEmpty()
{
	return (top < 0);
}

bool Stack::areBracketsBalanced(string expr)
{ 
    class Stack s;
    char x;

    for (int i = 0; i < expr.length(); i++)
    {
        if (expr[i] == '(' || expr[i] == '['
            || expr[i] == '{')
        {
            s.push(expr[i]);
            continue;
        }
 
        if (s.isEmpty())
            return false;
 
        switch (expr[i]) {
        case ')':
             
            x = top;
            s.pop();
            if (x == '{' || x == '[')
                return false;
            break;
 
        case '}':
 
            x = top;
            s.pop();
            if (x == '(' || x == '[')
                return false;
            break;
 
        case ']':
 
            x = top;
            s.pop();
            if (x == '(' || x == '{')
                return false;
            break;
        }
    }
 
    return (s.isEmpty());
}

int main()
{
	class Stack s;
    string expr;
    cout<< "Expression";
    cin>>expr;

    if (s.areBracketsBalanced(expr))
        cout << "Balanced";
    else
        cout << "Not Balanced";

	return 0;
}
