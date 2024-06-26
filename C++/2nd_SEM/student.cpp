#include<iostream>
using namespace std;
class student{
    public:
    float m1;
    float m2;
    float avg;
    void get(){
        cout<<"Enter m1 and m2"<<endl;
        cin>>m1>>m2;
    }
    void show(){
        cout<<m1<<" "<<m2<<endl;
    }
    average(student p);
};
void student::average(student p){
    p.avg=(p.m1+p.m2)/2;
    cout<<"Average "<<p.avg<<endl;
}
int main(){
    student s;
    s.get();
    s.show();
    average(s);
}