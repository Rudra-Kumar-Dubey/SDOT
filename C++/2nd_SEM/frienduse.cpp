//defining friend in one class to access in another class.
#include <iostream>
using namespace std;
class simple2;
class simple1
{    
    int a,b;
    public:
    friend class simple2;
    void getab()
    {
        cout<<"enter a and b values";
        cin>>a>>b;
    }    
};
class simple2
{
    public:
    void putab(simple1 s1)
    {
        s1.getab();
        cout<<s1.a<<endl;
        cout<<s1.b<<endl;
    }
};
int main()
{
  simple1 s1;
  simple2 s2;
  //s1.getab(); here we access it pprom another class
  s2.putab(s1);
  return 0;
}