//pointer variable 
//implementation of all functions cannot be provide in base class
//we can implement those functions in derived class.
//if a base class is having two or more virtual
//funtions then it is called abstract class 
#include <iostream>
using namespace std;
class shapetemp
{
    public:
    int a,b;
    void getab()
    {
        cin>>a>>b;
    }
    void gets()
    {
        cin>>a;
    }
    virtual int area()=0; //virtual funtion to define in derived class
};
class triangle:public shapetemp
{
    public:
    int area()
    {
        return 0.5*a*b;
    }
};
class rectangle:public shapetemp
{
    public:
    int area()
    {
        return a*b;
    }
};
class square:public shapetemp
{
    public:
    int area()
    {
        return a*a;
    }
};
int main()
{
    triangle t;
    t.getab();
    cout<<"the area is: "<<t.area()<<endl;
    rectangle r;
    r.getab();
    cout<<"the area is: "<<r.area()<<endl;
    square s;
    s.gets();
    cout<<"the area is: "<<s.area()<<endl;
    return 0;
}