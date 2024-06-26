//constructors USERDEFINED.(parameterised)
//special MF.
//the moment you create an object.
//help assign value to data memeber of class.
//when we define contrutor then it is user defined constructor
//compiler will create a constructor itself but it will be useless.
//constructor always in public area.
//constructor name should be seen as class name.
//this is without argu/ment constructor.It won't return anything.
//the moment you create object the constructor is invoked.
#include <iostream>
using namespace std;
class simple
{
    int a,b,c;
    public:
    simple(int p=10,int q=20,int r=30)
    {   
        a=p;
        b=q;
        c=r;
    }
    void putinfo()
    {
        cout<<a<<b<<c<<endl;
    }
};
int main()
{
    simple s1;
    simple s2(100,200,300);
    simple s3(1000,5000);
    s1.putinfo();
    s2.putinfo();
    s3.putinfo();
    return 0;   
}