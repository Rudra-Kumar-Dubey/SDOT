#include<iostream>
using namespace std;
class REPORT
{
    int adno;
    char name[20];
    float marks[5], average;
    int GETAVG()    
    {
        int a=0;
        for(int i=0;i<5;i++)
        {
            a=a+marks[i];
        }
        return a/5;
    }
    public:
    int READINFO()    //function to take input from user
    {
        cout<<"Enter Details: "<<endl;
        cout<<"Enter Admission Nbr: "<<endl;
        cin>>adno;
        cout<<"Enter Name: "<<endl;
        cin>>name;
        cout<<"Enter Marks of 5 subjects: "<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<"Enter Marks of subject "<<i+1<<endl;
            cin>>marks[i];
        }
    }
    void DISPLAYINFO()  //function to display details.
    {
        cout<<"\n";
        cout<<"Admission Nbr is: "<<adno<<endl;
        cout<<"Name is: "<<name<<endl;
        cout<<"Marks of all 5 Subjects: "<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<"Marks of subject "<<i+1<<" is: "<<marks[i]<<endl;
        }
        cout<<"Average Marks is: "<<GETAVG()<<endl;
    }
};
int main()
{
    REPORT r;     
    r.READINFO();
    r.DISPLAYINFO();
    return 0;
}