//Dynamic Memory Allocation
#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    //int arr[5];
    int * p = &a;
    //p = new int[a];
    *p =13;
    cout<< *p;
    //cout <<sizeof(p);
    delete[] p;
    return 0;
}