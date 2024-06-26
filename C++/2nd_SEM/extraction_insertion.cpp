//<< is extraction
//>> is insertion operator
//cout
//cin
//cout is an object of ostream class
//cin is an object of istream class
//cout<<s; s--->user defined type
//then we need to overload << to work with UDT
//cin>>s; s---->UDT
//this also will need to be overloaded
#include<iostream>
using namespace std;
class simple
{
    int x,y;
    public:
    friend void operator >>(istream &bharath,simple &sarad)
    {
        cout<<"enter x and y values"<<endl;
        bharath>>sarad.x>>sarad.y;
    }
    friend void operator<<(ostream &cout, simple sarad )
    {
        cout<<sarad.x<<endl;
        cout<<sarad.y<<endl;
    }
};
int main()
{
    simple s;
    cin>>s;
    cout<<s;
}