//copy contructors
//to declare and intialize an object from another object  
/*classname(const classname &obj)
{

}*/
#include<iostream>
using namespace std;
class simple
{
    int x;
    public:
    simple()
    {

    }
    simple(int p)
    {
        x=p;
    }
    void disp()
    {
        cout<<"the x value is:"<<x<<endl;
    }
};
int main()
{
    simple obj1(40);
    simple obj2;
    obj2=obj1;  //copy constructor
    obj1.disp();
    obj2.disp();
    return 0;
}
// anothercase
int main()
{
    simple obj1(40);
    simple obj2(obj1);  //copy constructor
    obj1.disp();
    obj2.disp();
    return 0;
}
//anothercase
int main()
{
    simple obj1(40);
    simple obj2=obj1;  //copy constructor
    obj1.disp();
    obj2.disp();
    return 0;
}