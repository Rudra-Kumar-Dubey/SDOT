//acessing data member of multiple classes with one function
//using friend function
//max program
#include <iostream>
using namespace std;
class simple2;
class simple1
{    
    int a;
    public:
    void get()
    {
        cout<<"enter a value"<<endl;
        cin>>a;
    }
    friend void max(simple1,simple2);   
};
class simple2
{    
    int b;
    public:
    void get()
    {
        cout<<"enter b value"<<endl;
        cin>>b;
    }
    friend void max(simple1,simple2);    
};
void max(simple1 s1,simple2 s2)
{
    if(s1.a>s2.b)
    cout<<"a is max value";
    else if (s2.b>s1.a)
    cout<<"b is max value";
    else
    cout<<"both are equal";
}
int main()
{ 
  simple1 s1;
  simple2 s2;
  s1.get();
  s2.get();
  max(s1,s2);
  return 0;
}