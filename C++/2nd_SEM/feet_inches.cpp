#include<iostream>
using namespace std;
int main()
{
    int feet,inch,r,cm;
    cout<<"Enter two integers one for feet one for inch\n";
    cin>>feet>>inch;
    r=feet*12;
    r=r+inch;
    cm=r*2.54;
    cout<<"He is "<<cm<<"cm";
}