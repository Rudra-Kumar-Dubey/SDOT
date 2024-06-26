//hybrid inheritance
#include <iostream>
using namespace std;
class base
{
    public:
    int x,y;
    void getxy()
    {
        cout<<"Enter x and y values"<<endl;
        cin>>x>>y;
    }
};
class der1:public base
{
    public:
    int z;
    void getz()
    {
        cout<<"Enter z values"<<endl;
        cin>>z; 
    }    
};
class der2
{
    public:
    int a;
    void geta()
    {
        cout<<"Enter a values"<<endl;
        cin>>a; 
    }  
};
class der3:public der1,public der2
{
    public:
    int b;
    void getb()
    {
        cout<<"Enter b values"<<endl;
        cin>>b; 
    }
    void disp()
    {
        cout<<"Value of x,y,z,a,b: \n"<<x<<"\n"<<y<<"\n"<<z<<"\n"<<a<<"\n"<<b;
    }  
};
int main()
{
    der3 d3;
    d3.getxy();
    d3.getz();
    d3.geta();
    d3.getb();
    d3.disp();
    return 0;
}