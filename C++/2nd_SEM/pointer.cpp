#include <iostream>
using namespace std;
class simple
{
    string name;
    int sal;
    public:
    simple(string n,int s)
    {
        name=n;
        sal=s;
    }
    void disp()
    {
        cout <<"the emp name is"<<name<<endl;
        cout<<"the emp sal is"<<sal<<endl;
    }

};
int main()
{
    simple *p = new simple("bharath",10);
    //p.disp();
    //->
    p->disp();
    return 0;
}