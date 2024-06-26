//multiple exception uses multiple catch block
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
    catch(int p)
    {
        cout<<"the x value should not be zero"<<endl;
    }
    catch(double q)
    {
        cout<<"the x value should not be +ve"<<endl;
    }
    catch(char r)
    {
        cout<<"the x value should not be -ve"<<endl;
    }
}
int main()
{
    fun(0);
    fun(4);
    fun(-44);
    return 0;  
}
/*
#include <iostream>
using namespace std;
void fun(int x)
{
try
{
if(x==0)
throw 1.0;
else
if(x>0)
throw 1;
else
throw 'x';
}
catch(int p)
{
cout<<"the x values should not be zero"<<endl;
}
catch(double q)
{
cout<<"the x value should not be +ve "<<endl;
}
catch(char r)
{
cout<<"the x value should not be -Ve"<<endl;
}
}
int main()
{
fun(0);
//fun(4);
//fun(-44);
return 0;
}
*/