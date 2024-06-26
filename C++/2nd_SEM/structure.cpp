#include <iostream>
using namespace std;
struct student
{
    int stu_id;
    char sname[20];
    float marks;
};
int main()
{
    cout<<"enter student info\n";
    student s[3];
    for(int i=0;i<3;i++)
    {
        cout<<"enter student id\n";
        cin>>s[i].stu_id;
        cout<<"enter student name\n";
        cin>>s[i].sname;
        cout<<"enter student marks\n";
        cin>>s[i].marks;
    }
    for(int i=0;i<3;i++)
    {
        cout<<"Student INFO\n";
        cout<<"student id: "<<s[i].stu_id<<endl;
        cout<<"student name: "<<s[i].sname<<endl;
        cout<<"student marks: "<<s[i].marks<<endl;
        cout<<"\n";
    }
    return 0;
}