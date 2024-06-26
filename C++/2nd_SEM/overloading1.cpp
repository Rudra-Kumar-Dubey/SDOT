#include<iostream>
using namespace std;
class simple
{
    int x,y;
    public:
    simple()
    {
        x=0;
        y=0;
    }
    simple(int x1, int y1)
    {
        x=x1;
        y=y1;
    }
    void operator =(simple obj)
    {
        x=obj.x;
        y=obj.y;
    }
    void disp()
    {
        cout<<"x value"<<x<<endl;
        cout<<"y value is"<<y<<endl;
    }
    /*
    void assign(simple obj)
    {
        x=obj.x;
        y=obj.y;
    }
    */
};
int main()
{
    simple s1(10,20),s2(30,40);
    s1=s2; //s1.assign(s2);
    s2.disp();
    return 0;
}