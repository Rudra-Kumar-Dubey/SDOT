#include<iostream>
using namespace std;
class base
{
    public:
    int a;
    int e;
    void get()
    {
        cout<<"enter value of a"<<endl;
        cin>>a;
        cout<<"enter value of e"<<endl;
        cin>>e;
    }
    void disp()      //void dispea();
    {
        cout<<"the a value is"<<a<<endl;
        cout<<"the e value is"<<e<<endl;
    }
    protected:
    int b;
    private:
    int c;
};
class dp:public base
{
    int d;
    public:
    void getd()
    {
        cout<<"enter value of d"<<endl;
        cin>>d;
    }
    void disp()
    {
        cout<<"the a value is"<<a<<endl;
        cout<<"the e value is"<<e<<endl;
        cout<<"the d value is"<<d<<endl;
    }
    //a is public
    //b is protected
    //c is inaccessible
};
class dpro:protected base
{
    //a is protected
    //b is protected
    //c is inacessible
};
class dpri:private base
{
    //a is private
    //b is private
    //c is inacessible
};
int main()
{
    base b;
    b.get();
    b.disp();  //void dispea();
    dp d;
    d.get();
    d.getd();
    d.disp();
    return 0;
}