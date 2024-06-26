#include <iostream>
using namespace std;
void fun(int x) throw (int,char)
{
    if(x==0)
    throw x;
    else
    if(x>0)
    throw 'x';
    else
    throw 1.0;
}
int main()
{
    try
    {
        //fun(0);
        fun(44);
        //fun(-4);
        }
        catch(int p)
        {
            cout<<"the x value should not be zero"<<endl;
        }
        catch(char q)
        {
            cout<<"the x value should nnot be +ve"<<endl;
        }
        catch(double r)
        {
            cout<<"the x value should not be _ve"<<endl;
        }
        return 0;
}
