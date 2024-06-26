//max of two
#include<iostream>
using namespace std;
template<class t1,class t2>
void max(t1 p,t2 q)
{
    if(p > q)
    {
        cout<<"This is largest "<<p<<endl;
    }
    else
    {
        cout<<"This is largest "<<q<<endl;
    }
}
int main()
{
    max(20,4);
    max(2.4,2);
    max('a','b');
    max(1,'a');
    max(1.2,'b');
    return 0;
}