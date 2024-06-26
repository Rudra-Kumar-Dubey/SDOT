//array out of bound exception
#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5},i;
    try
    {
        i=0;
        while(1)
        {
            if(i!=5)
            {
                cout<<a[i]<<endl;
                i++;
            }
            else
            {
                throw i;
            }
        }
    }
    catch(int i)
    {
        cout<<"this is an array out of bound exception"<<endl;
    }
    return 0;  
}