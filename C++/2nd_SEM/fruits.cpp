#include <iostream>
#include <string>
using namespace std;
struct fruit{
    char f_name[20];
    char f_type[10];
    char f_colour[10]; 
};
int main()
{
    cout<<"enter fruit info\n";
    fruit f[4];
    for(int i=0;i<4;i++)
    {
        cout<<"enter fruit name\n";
        cin>>f[i].f_name;
        cout<<"enter fruit type\n";
        cin>>f[i].f_type;
        cout<<"enter fruit colour\n";
        cin>>f[i].f_colour;
    }
    for(int i=0;i<3;i++)
    {
        cout<<"fruit INFO\n";
        cout<<"fruit name: "<<f[i].f_name<<endl;
        cout<<"fruit type: "<<f[i].f_type<<endl;
        cout<<"fruit colour: "<<f[i].f_colour<<endl;
        cout<<"\n";
    }
    return 0;
}