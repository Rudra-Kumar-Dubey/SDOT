//constructors
//special MF
//the moment you create an object
//help assign value to data memeber of class
//when we define contrutor then it is user defined constructor
//compiler will create a constructor itself but it will be useless.
//constructor always in public area.
//constructor name should be seen as class name.
//this is without argument constructor.It won't return anything.
//the moment you create object the constructor is invoked.
#include <iostream>
using namespace std;
class simple
{
    int a,b,c;
    public:
    simple()
    {
        a=10;
        b=20;
        c=30;
    }
    void putinfo()
    {
        cout<<a<<b<<c<<endl;
    }
};
int main()
{
    simple s;
    s.putinfo();
    return 0;   
}