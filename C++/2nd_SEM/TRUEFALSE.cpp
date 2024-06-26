#include<iostream>
using namespace std;
bool False(string id)
{
    cout<<"False"<<id<<endl;
    return false;
}
bool True(string id)
{
    cout<<"True"<<id<<endl;
    return true;
}
int main()
{
    bool res;
    res=True("A")&&False("B")||False("C");
    cout<<res;
    return 0;
}