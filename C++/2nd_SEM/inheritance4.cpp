// to do constructor and destructor
#include <iostream>
using namespace std;
class simple
{
int sal;
int age;
public:
simple(int sal1,int age1)
{
sal=sal1;
age=age1;
}
void disp()
{
cout<<"the sal is"<<sal<<endl;
cout<<"the age is"<<age<<endl;
}
};
class simple1:public simple
{
int id;
public:
simple1(int sal1,int age1,int id1):simple(sal1,age1)
{
id=id1;
}
void show()
{
cout<<"the id is:"<<id<<endl;
}
};
int main()
{
simple1 s1(10000,30,1234);
s1.disp(); // 10000 30
s1.show(); //1234
return 0;
}