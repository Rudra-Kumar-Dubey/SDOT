#include <iostream>
using namespace std;
class student
{
    float m1;
    float m2;
    public:
    void get(){
        cout<<"Enter Marks 1 and Marks 2 "<<endl;
        cin>>m1>>m2;
    }
    float max();
    void show();
};
float student::max(){
    if(m1>m2)
    return m1;
    else
    return m2;
}
void student::show(){
    cout<<"The maximum marks is "<<student::max()<<endl;
}
int main(){
    student s;
    s.get();
    s.show();
    return 0;
}