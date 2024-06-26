//Diamond Problem.....
//A
//B C
//D
//using virtual keyword 
//virtual funtions: is a member function which is declared within 
//base class and is redefined in derived class.
//working with virtual function needs pointer variables
#include<iostream>
using namespace std;
class A
{
    public:
    int a;
    void show()
    {
        cout<<"i am in first class"<<endl;
    }
};
class B:public A
{
    public:
    B()
    {
        a=4;
    }
    void show()
    {
        cout<<"i am in second class"<<a<<endl;
    }
};
class C:public A
{
    public:
    C()
    {
        a=44;
    }
    void show()
    {
        cout<<"i am in third clsss"<<a<<endl;
    }
};
class BC: virtual public B,public C    //class BC:public C,public B 
{
    public:
    void show()
    {
        cout<<"i am in final class "<<a<<endl;   //cout<<"i am in final class "<<B::a<<endl; 
    }
};
int main()
{
    BC obj;   
    obj.show();     
    return 0;
}