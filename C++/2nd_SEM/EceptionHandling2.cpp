#include<iostream>
using namespace std;
void fun()
{
    int x;
    cout<<"Enter x"<<endl;
    cin>>x;
    if(x>0)
    {
        cout<<"the square is "<<x*x;
    }
    else
    {
        throw x;
    }
}
int main()
{
    try
    {
        fun();
    }
    catch(int y)
    {
        cout<<"this is an exception"<<endl;
    }
    return 0;  
}