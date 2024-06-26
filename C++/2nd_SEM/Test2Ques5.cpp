#include <iostream>
using namespace std;
class Person
{     
    protected:
    char name[20];
    int age;
    virtual void get()=0;
};
class Student:protected Person 
{     
    protected:
    int roll;
    float fees;    
};
class Teacher:protected Person
{     
    protected:
    int id;
    float sal;      
};
class Master:protected Teacher, protected Student
{
    public:
    string n;
    int a;
    void studentDet()    //function show and take info of student.
    {
        cout<<"Enter Roll Nbr:"<<endl;
        cin>>roll;
        cout<<"Enter Fees:"<<endl;
        cin>>fees;
        cout<<"\n";
        cout<<"Name is: "<<Student::name<<endl;
        cout<<"Age is: "<<Student::age<<endl;
        cout<<"Roll Nbr is: "<<roll<<endl;
        cout<<"Fees is: "<<fees<<endl;
    }
    void teacherDet()   //function show and take info of teacher.
    {
        cout<<"Enter ID:"<<endl;
        cin>>id;
        cout<<"Enter Salary:"<<endl;
        cin>>sal;
        cout<<"\n";
        cout<<"Name is: "<<n<<endl;
        cout<<"Age is: "<<Teacher::age<<endl;
        cout<<"ID is: "<<id<<endl;
        cout<<"Salary is: "<<sal<<endl;
    } 
    void get()         //function get age and name.
    {
        cout<<"Enter Details"<<endl;
        cout<<"Enter Name:"<<endl;
        cin>>Student::name;
        cout<<"Enter Age:"<<endl;
        cin>>Student::age;
        n=Student::name;
        a=Student::age;
        Teacher::age=a;
        if(Student::age>30)    //Condition for age.
        {
            teacherDet();
        }
        else
        {
            studentDet();
        }
    }
};
int main()
{ 
    Master m;
    m.get();
    return 0;
}
