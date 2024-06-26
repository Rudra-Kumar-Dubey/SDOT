#include<iostream> 
using namespace std; 
float sum(float p,float c) 
{ 
    return (p+c); 
} 
float sub(float n3,float n4) 
{ 
    return (n3-n4); 
} 
float mul(float n5,float n6) 
{ 
    return (n5*n6); 
}
float div(float n7,float n8) 
{ 
    return (n7/n8); 
}
void showchoice() 
{ 
    cout<<"for addition +,for subtration -,for multiplication *,for division /\n";
} 
  int main() 
{ 
    char oper;
    float n1,n2;
    showchoice();
    cout<<"Enter Operator\n";
    cin>>oper;
    cout<<"Enter number 1 and number 2\n";
    cin>>n1>>n2;
    if(oper=='+')
    {
        cout<<sum(n1,n2);
    }
    if(oper=='-')
    {
        cout<<sub(n1,n2);
    }
    if(oper=='*')
    {
        cout<<mul(n1,n2);
    }
    if(oper=='/')
    {
        cout<<div(n1,n2);
    }
    return 0;
}