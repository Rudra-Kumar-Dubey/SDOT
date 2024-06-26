//overriding
#include <iostream>
using namespace std;
class A
{
public:
void show()
{
cout<<"i am in first class"<<endl;
}
};
class B
{
public:
void show()
{
cout<<"i am in second class"<<endl;
}
};
class AB:public A,public B
{
public:
void show()
{
A::show();
cout<<"i am in third class"<<endl;
B::show();
}
};
int main()
{
AB obj;
obj.AB::show();
return 0;
}