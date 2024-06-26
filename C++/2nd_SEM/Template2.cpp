//SWAP VALUE
#include<iostream>
using namespace std;
template<class t>
void swap1(t &x,t &y)
{
    t tmp=x;
    x=y;
    y=tmp;
    cout<<"After Swaping";
    cout<<x<<endl;
    cout<<y<<endl;
}
int main()
{
    int a=10,b=2;
    float p=2.4,q=4.2;
    swap1(a,b);
    swap1(p,q);
    return 0;
}