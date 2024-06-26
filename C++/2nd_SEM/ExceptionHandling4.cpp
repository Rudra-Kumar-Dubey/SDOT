//catching multiple exceptions by single catch block
#include<iostream>
using namespace std;
void fun(int x)
{
    try
    {
        if(x==0)
        {
            throw x;
        }
        else
        {
            if(x>0)
            throw 1.0;
            else
            throw 'x';
        }
    }
    catch(double d)
    {
        cout<<"the x value should not be 0"<<endl;
    }
    catch(...)  //multiple catch block exception
    {
        cout<<"I am multiple exception handler catch block"<<endl;      //default catch block
    }
}
int main()
{
    fun(0);
    fun(4);
    fun(-44);
    return 0;
}
