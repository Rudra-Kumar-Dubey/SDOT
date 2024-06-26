//DMA
//new operator
//pointer
//int *p = new int[4]
// p[0],p[1],p[2],p[3]
//1000--BA
//(1000+0*2)
//1000--10
//(1000+1*2)
//1002--20
//delete
//int *p=new int;
//*p=1234;
//delete p;
#include <iostream>
using namespace std;
int main()
{
    int sum=0,size;
    cout<<"enter number of emp working"<<endl;
    cin>>size;
    int *sal=new int[size];
    for(int i=0;i<size;i++)
    {
        cin>>*(sal+i);
        cout<<"\n";
        //cout<<(sal+i);
        //cout<<"\n";
    }
    for(int i=0;i<=size;i++)
    sum=sum+*(sal+i);
    cout<<"The total sal of all emp: "<<sum<<endl;
    delete[] sal;
    return 0;
}