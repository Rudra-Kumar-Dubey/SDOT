#include <iostream>
using namespace std;
class simple
{
    int a,b,sub;
    public:
    simple(int p=20,int q=10)
    {   
        a=p;
        b=q;
    }
    inline void sub(){
        sub = a - b;
        cout << "the sub is" <<sub<< endl;
    }
    ~simple()
    {
        cout<<"i have free up the space"<<endl;
    }
    
};
int main()
{
    simple s;
    s.sub();
    return 0;   
}