#include<iostream>
using namespace std;
class simple
{
    int *p;    //pointer variable
    public:
    simple(int x)
    {
        cout<<"i am a parameterised constructor"<<endl;
        p= new int;   //dynamic memory
        *p=x;
        cout<<p<<endl;
        cout<<*p<<endl;
    }
    simple(const simple &objj)
    {
        cout<<"i am a copy constructor"<<endl;
        p=new int;
        *p=*objj.p;
        cout<<p<<endl;
        cout<<*p<<endl;
        cout<<"\n...............\n\n";
    }
    void disp()
    {
        cout<<*p<<endl;
    }
    
};
int main()
{
    simple obj1(100);
    simple obj2(obj1);
    obj1.disp();
    obj2.disp();
    return 0;
}