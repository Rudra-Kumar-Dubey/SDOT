// orperator is used to make code understanding.
#include<iostream>
using namespace std;
class simple
{
    int x;
    public:
    void get()
    {
        cout<<"enter x"<<endl;
        cin>>x;
    }
    void put()
    {
        cout<<"the x value is"<<x<<endl;
    }
    simple operator +(simple obj)
    {
        simple s3;
        s3.x=x+obj.x;
        return s3;
    }
    /*
    simple sum(simple obj)
    {
        sumple s3;
        s3.x=x+obj.x;
        return s3;
    }
    */
};
int main()
{
    simple s1,s2,s3;
    s1.get();
    s2.get();
    s3=s1+s2;     // s3=s1+sum(s2);
    s1.put();
    s2.put();
    s3.put();
    return 0;
}