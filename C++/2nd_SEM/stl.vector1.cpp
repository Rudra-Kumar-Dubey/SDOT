//VECTOR NOT WORKINGGGG
//STL LIST and MAP....STACK AND VECTOR
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> n;
    vector<int>::iterator it;
    n.assign(10,5);
    n.push_back(2000);
    /*
    for(int i=0;i<n.size();i++)
    {
        cout<<n[i]<<endl;
    }
    */
    for(it=n.begin();it!=n.end();it++){
        cout<<*it<<endl;
        }
    n.pop_back();
    for(int i=0;i<n.size();i++)
    {
        cout<<n[i]<<endl;
    }
    n.clear();
    cout<<"The Size of Vector After Clear"<<n.clear()<<endl;
    return 0;
}