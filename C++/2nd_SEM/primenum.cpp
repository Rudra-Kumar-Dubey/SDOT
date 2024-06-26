//prime number program for a range
#include<iostream>
using namespace std;
int main()
{
    int n1,n2,i,flag;
    cout<<"Enter Intial Range Number \n";
    cin>>n1;
    cout<<"Enter Final Range Number \n";
    cin>>n2;
    for (n1; n1<n2+1;n1++)
    {
        if(n1>1)
        {flag=1;
            for(i=2;i<n1;i++)
            {
                if((n1%i)==0)
                {
                    flag=0;
                    cout<<n1<<" is not a prime number"<<endl;
                    break;
                }
            }
            if(flag==1)
            {
                cout<<n1<<" is a prime number"<<endl;   
            }
        }
        else
        {
            cout<<n1<<" is not a prime number"<<endl;
        }
    }    
}