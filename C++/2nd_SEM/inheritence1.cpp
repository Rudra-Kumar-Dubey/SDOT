#include <iostream>
using namespace std;
class base
{
    public:
    int x;
    void getx()
    {
        cout<<"enter value of x"<<endl;
        cin>>x;
    }
};
class der1:public base
{
    public:
    int y;
    void gety()
    {
        cout<<"enter value of y"<<endl;
        cin>>y;
    }
};
class der2:public der1
{
    int z;
    public:
    void getz()
    {
        cout<<"enter z value"<<endl;
        cin>>z;
    }
    void disp()
    {
        cout<<"the three variable value are:\n"<<x<<"\n"<<y<<"\n"<<z;
    }
};
int main()
{
    der2 d2;
    d2.getx();
    d2.gety();
    d2.getz();
    d2.disp();
    return 0;
}