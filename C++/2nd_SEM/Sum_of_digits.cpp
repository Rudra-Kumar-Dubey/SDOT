#include<iostream>
using namespace std;
int main()
{
    int num,rem,sum=0;
    cout<<"the second C++ program \n";
    cout<<"Enter A Number";
    cin>>num;


    while(num!=0)
    {
    rem=num%10;
    sum=sum+rem;
    num=num/10;
    }
    cout<<"the sum of digits of a number is ="<<sum;
}