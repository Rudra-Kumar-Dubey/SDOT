//Template
//you can define a single that will work with different 
//data types which can be possible with templates.
//two types:
//function templates -> code resability
//class templates 
//Function Template:
/*
void sum(int x,int y)
{
    x+y;
}
void sum1(float x,float y)
{
    x+y;
}
//I am going to define a single function which will work
//with different data types
void sum2()
{
}
template<class t> //t can be anything
void tempfun(t p)   //p is class type
{
}
tempfun(4.5)
*/
#include<iostream>
using namespace std;
template<class t1,class t2>
t1 tempsum(t1 p,t2 q) //whatever you put in that will be the datatype of function
{
    return p+q;
}
template<class t1,class t2,class t3>
float tempsum(t1 p,t2 q,t3 r)
{
    return p+q+r;
}
int main()
{
    cout<<"The integer sum is: "<<tempsum(2,4)<<endl;
    cout<<"The float sum is: "<<tempsum(1.2,2.7)<<endl;
    cout<<"The float and int sum is: "<<tempsum(1.2,2)<<endl;
    cout<<"The three variable sum is: "<<tempsum(2,3,4.2)<<endl;
    cout<<"the two char "<<tempsum('a','b');
    return 0;
}