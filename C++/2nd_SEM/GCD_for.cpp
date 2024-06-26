#include<iostream>
using namespace std;
int main() 
{
    int n1,n2,gcd;
    cout<<"Enter Two Number: ";
    cin>> n1 >> n2;
    for(int i=1;i<=n1&&i<=n2;i++)
    {
        if(n1%i==0 && n2%i == 0 )
        {
            gcd=i;
        }
    }
    cout<<"Greatest Common Divison (GCD):"<<gcd<<endl;
    return 0;
}