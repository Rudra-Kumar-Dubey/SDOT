#include<iostream>
using namespace std;
int main()
{
    int i, x;
    char str[100];
    cout<<"Please Enter Password";
    cin>>str;
    for(i=0;(i<100 && str[i] !='\0');i++)
    str[i]=str[i]+2;
    cout<<"\n Encrypted Password: "<<str<<endl;
    return 0;
}