#include<iostream>
using namespace std;
class simple
{
    int x,y;
    public:
    void get()
    {
        cout<<"Enter x and y value"<<endl;
        cin>>x>>y;
    }
    void disp()
    {
        cout<<"the x value "<<x<<endl;
        cout<<"the y value "<<y<<endl;
    }
    friend simple operator +(simple,simple);
};
simple operator +(simple obj1, simple obj2)
{
    simple s3;
    s3.x=obj1.x+obj2.x;
    s3.y=obj1.y+obj2.y;
    return s3;
}
int main()
{
    simple s1,s2,s3;
    s1.get();
    s2.get();
    s1.disp();
    s2.disp();
    s3=s1+s2;
    s3.disp();
    return 0;
}