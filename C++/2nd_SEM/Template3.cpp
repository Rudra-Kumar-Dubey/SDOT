//array search 
#include<iostream>
using namespace std;
template<class t>
void search(t x[],t n)
{
    int i;
    for(i=0;i<4;i++)
    {
        if(x[i]==n)
        {
            cout<<n<<" is found at "<<i+1<<endl;
            break;
        }
    }
    if(i==4)
    {
        cout<<"NUMBER NOT FOUND!"<<endl;
    }
}
int main()
{
    int isearch[4],ino;
    float fsearch[4],fno;
    cout<<"Enter Array Values"<<endl;
    for(int i=0;i<4;i++)
    {
        cin>>fsearch[i];  //you can change it to isearch
    }
    cout<<"Enter Number to search"<<endl;
    cin>>fno;
    search(fsearch,fno);
    return 0;
}