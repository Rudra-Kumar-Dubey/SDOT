#include <iostream>
using namespace std;
class basic_info
{
    public:
    char name[20];
    int rollno;
    char gender[10];

    void getdata()
    {
        cout<<"Enter Name: "<<endl;
        cin>>name;
        cout<<"Enter Roll Nbr: "<<endl;
        cin>>rollno;
        cout<<"Enter Gender: "<<endl;
        cin>>gender;
    }
    void display()
    {
        cout<<"Name is: "<<name<<endl;
        cout<<"Roll Nbr is: "<<rollno<<endl;
        cout<<"Gender is : "<<gender<<endl;
    }
};

class physical_fit:public basic_info
{
     public:
     float height, weight;  
     void getdata()        //taking height in cm and weight in kg.
    {
        basic_info::getdata();
        cout<<"Enter height(in cms): "<<endl;
        cin>>height;
        cout<<"Enter weight(in kg): "<<endl;
        cin>>weight;
    }
    void display()
    {
        cout<<"\n";
        basic_info::display();
        cout<<"Height of "<<name<<" is: "<<height<<" cm"<<endl;
        cout<<"Weight of "<<name<<" is: "<<weight<<" kg"<<endl;
    }
};
int main()
{
    physical_fit pf;
    pf.getdata();
    pf.display();
    return 0;
}