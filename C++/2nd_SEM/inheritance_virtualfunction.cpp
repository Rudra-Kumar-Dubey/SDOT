//virtual function 
//pointer use
//pointer variable 
//implementation of all functions cannot be provide in base class
//we can implement those functions in derived class.
#include <iostream>
using namespace std;
class A
{
    public:
    virtual void disp()
    {
        cout<<" I  am in base class and i am in virtual class"<<endl;
    }
    void ndisp()
    {
        cout<<" i am in baseclass and i am not in virrtaul function"<<endl;
    }
};
class B:public A
{
    public:
    void disp()
    {
        cout<<" i am in derivedd class and i am not in virtual function"<<endl;
    }
    void ndisp()
    {
        cout<<"i am in DC and I am not in VF and from ndisp"<<endl;
    }
};
int main()
{
    A obj1; // disp and ndisp
    B obj2; // ndisp(A) and disp(B)

    // this is pointer calling
    A *ptr;
    ptr=&obj1;
    ptr->disp();
    ptr->ndisp();
    ptr=&obj2;
    ptr->disp();
    ptr->ndisp();
    cout<<"\n";
    // this direct calling
    obj1.disp();
    obj1.ndisp();
    obj2.disp();
    obj2.ndisp();

    return 0;
}   