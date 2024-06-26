
#include<iostream>
using namespace std;
float money(float a=10000 , float b=1.04)
{
    return a*b;
}
struct bank
{
    char customer_name[20];
    float invested_Rs;
    long cust_mobno;
    char address[20];
};
int main()
{
    struct bank ss;

    ss.customer_name= "srajan";
    ss.cust_mobno= 945;
    ss.address= "post office gali";
    ss.invested_Rs= 10000.0;
    cout<<"customer name: "<<ss.customer_name<<endl;
    cout<<"customer mob num: "<<ss.cust_mobno<<endl;
    cout<<"customer address: "<<ss.address<<endl;
    cout<<"the returned value after 1 month will be: "<<money()<<endl;
    return 0;
}

#include<iostream>
using namespace std;
float money(float a=10000 , float b=1.04)
{
    return a*b;
}
struct bank
{
    string customer_name;
    float invested_Rs;
    long cust_mobno;
    string address;
};
int main()
{
    struct bank ss;

    ss.customer_name="srajan";
    ss.cust_mobno= 945;
    ss.address= "post office gali";
    ss.invested_Rs= 10000.0;
    cout<<"customer name: "<<ss.customer_name<<endl;
    cout<<"customer mob num: "<<ss.cust_mobno<<endl;
    cout<<"customer address: "<<ss.address<<endl;
    cout<<"the returned value after 1 month will be: "<<money()<<endl;
    return 0;
}