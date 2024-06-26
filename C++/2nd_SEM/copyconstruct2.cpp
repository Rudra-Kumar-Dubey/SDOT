#include<iostream>
using namespace std;
class simple
{
    int x;
    public:
    simple()
    {

    }
    simple(int p)
    {
        x=p;
    }
    simple(simple &objjj)  //user defiend copy constructor
    {
        x=objjj.x; //accessing datamember of obj1
        cout<<"i am copy constructor"<<endl;

    }
    void disp()
    {
        cout<<"the x value is:"<<x<<endl;
    }
};
int main()
{
    simple obj1(40);
    simple obj2(obj1);  //copy constructor
    obj1.disp();
    //obj2.disp();
    return 0;
}