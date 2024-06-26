//Friend function
//can be declared anywhere
//its non memeber of class
//declaration should be inside a class friend
//defination outside class---no friend
//obj as argument
//as normal function
//we can put it in private part also
#include <iostream>
using namespace std;
class simple
{
    int a;
    public:
    void get()
    {
        cout<<"enter a value";
        cin>>a;
    }
    friend void update(simple);

};
void update(simple s)
{
    s.a=s.a+1000;
    cout<<"the updated value is"<<s.a<<endl;
}
int main()
{
    simple s;
    s.get();
    update(s);
    return 0;
}