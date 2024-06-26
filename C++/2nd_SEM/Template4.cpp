//class templates
//you have implemented a class which is genric
//in nature. the same class you can use for 
//different data types.
/*
template<class t>
class class_name
{
    t var;
    public:
    t fun(t arg)
    {

    }
};
t fun1(t agr1)
{

}
fun1(10);
//create generic class object....take care....data type
class_name obj;
class_name<datatype>object;..//to create a gentic obj
class_name<int> obj1;
class_name<float> obj2;
*/
#include<iostream>
using namespace std;
template<class t>
class temp
{
    t x,y;
    public:
    temp(t p,t q)
    {
        x=p;
        y=q;
    }
    //maimun value among two variable
    void max()
    {
        if(x>y)
        cout<<"x is max value "<<x<<endl;
        else
        cout<<"y is max value "<<y<<endl;
    }
};
int main()
{
    temp<int> intmax(10,20);
    intmax.max();
    temp<float> floatmax(1.4,0.8);
    floatmax.max();
    return 0;
}