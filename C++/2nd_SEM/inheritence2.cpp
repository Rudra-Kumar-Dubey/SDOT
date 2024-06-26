//hirarhical inheritance
#include <iostream>
using namespace std;
class base1
{
public:
int x,y;
void getxy()
{
cout<<"enter x "<<endl;
cin>>x;
cout<<"enter y "<<endl;
cin>>y;
}

};
class der1:public base1
{
public:
void sum()
{
cout<<"the sum of two base variables is:"<<x+y<<endl;
}
};
class der2:public base1
{
public:
int z;
void getz()
{
cout<<"enter z value"<<endl;
cin>>z;
}
void sum()
{
cout<<"the sum of three variables are"<<x+y+z<<endl;
}
};
int main()
{
der2 d2;
d2.getxy();
d2.getz();
d2.sum();
der1 d1;
d1.getxy();
d1.sum();
return 0;
}