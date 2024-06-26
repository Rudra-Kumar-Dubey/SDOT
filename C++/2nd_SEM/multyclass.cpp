#include <iostream>
using namespace std;
class simple1
{    
    int a,b;
    public:
    void get()
    {
        a=10;
        b=20;
        cout<<"the a value is"<<a<<endl;
        cout<<"the b value is"<<b<<endl;
    }    
};
class simple2
{    
    int c,d;
    public:
    void get()
    {
        c=30;
        d=40;
        cout<<"the c value is"<<c<<endl;
        cout<<"the d value is"<<d<<endl;
    }    
};
int main()
{
  simple1 s1;
  simple2 s2;
  s1.get();
  s2.get();  
  return 0;
}