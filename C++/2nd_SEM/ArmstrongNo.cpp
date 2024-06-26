#include<iostream>
using namespace std;
int main()
{
    int num,num1,rem,res=0;
    cout<<"Enter a Three digit number";
    cin>>num;
    num1=num;
    while(num!=0)
    {
    rem=num%10;
    res=res+rem*rem*rem;
    num=num/10;
    }
    if(num1==res)
    {
        cout<<"It is armstrong number\n";
    }
    else
    {
        cout<<"It is not armstrong number\n";
    }
}