//NOT WORKINGGGGGG
//vector---dynamic array
//a sequence of elements....array...
//vector is dynamic in nature
//vector<type> variable;
//push_back()-->pushes element from back...adding at end
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> n;
    for(int i=1;i<=4;i++)
    {
        n.push_back(i);
    }
    cout<<"The elements in vector are"<<endl;
    for(int i=0;i<4;i++)
    {
        cout<<n[i]<<endl;
    }
    cout<<n.at(1)<<endl;
    return 0;
}   