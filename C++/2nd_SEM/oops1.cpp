#include <iostream>
using namespace std;
class simple
{
    private:
    float p,res;
    int t;
    const float r=4.5;
    public:
    void read(float pp,int tt)
    {
        p=pp;
        t=tt;

    }
    void show()
    {
        res=(p*r*t)/100;
        cout<<"the res is:"<<res;

    }

};
int main()
{
    simple s;
    s.read(100,10);
    s.show();

    return 0;
}