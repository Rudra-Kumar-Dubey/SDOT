#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    char oper;
    cout<<"Enter Operator -[+,-,*,/]\n";
    cin>>oper;
    cout<<"Enter n1 and n2\n";
    cin>>n1>>n2;
    switch(oper)
    {
        case '+':
            cout<<"SUM is"<<n1+n2;
            break;
        case '-':
            cout<<"SUB is"<<n1-n2;
            break;
        case '*':
            cout<<"MUL is"<<n1*n2;
            break;
        case '/':
            cout<<"DIV is"<<n1/n2;
            break;
        default:
            cout<<"INVALID OPERATOR";
    }

}
