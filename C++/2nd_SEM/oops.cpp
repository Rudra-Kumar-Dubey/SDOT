#include<iostream>
using namespace std;
class emp
{
    private:
    int id;
    char name[20];
    float sal;
    public:
    void getemp()
    {
        cout<<"enter emp id,name and sal"<<endl;
        cin>>id>>name>>sal;
    }
    void putemp()
    {
        cout<<"the emp id is:"<<id<<endl;
        cout<<"the emp name is:"<<name<<endl;
        cout<<"the emp sal is:"<<sal<<endl;
    }

};
int main()
{
    emp e;
    e.getemp();
    e.putemp();
}