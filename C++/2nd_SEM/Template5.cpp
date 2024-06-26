#include<iostream>
using namespace std;
template<class t>
class classsearch
{
    t x[5];
    t value;
    public:
    void readarrray()
    {
        cout<<"Enter Array"<<endl;
        for(int i=0;i<5;i++)
        {
            cin>>x[i];
        }
        cout<<"Enter Value To Search"<<endl;
        cin>>value;
    }
    void searchvalue()
    {
        int i=0;
        for(i=0;i<5;i++)
        {
            if(x[i]==value)
            {
                cout<<value<<" is found at "<<i+1<<endl;
                break;
            }
        }
        if(i==5)
        cout<<"Value Not Found"<<endl;
    }
};
int main()
{
    classsearch<int> iarray;
    classsearch<float> farray;
    iarray.readarrray();
    iarray.searchvalue();
    farray.readarrray();
    farray.searchvalue();
    return 0;
}