#include<iostream>
using namespace std;
//array of objects
class simple
{
int a,b;
public:
void geta(int x)
{
a=x;
}
void puta()
{
cout<<a<<endl;
}
};
int main()
{

simple obj[4];
for (int i=0;i<4;i++)
obj[i].geta(i+1);
for (int i=0;i<4;i++)
obj[i].puta();
return 0;
}