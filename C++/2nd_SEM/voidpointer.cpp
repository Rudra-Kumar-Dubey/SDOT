#include<iostream>
using namespace std;
int main()
{
    int a= 10;
    char b = 's';
    void *ptr;
    ptr = &a;
    ptr = &b;
    //cout << *ptr;
    //error beacuse it does not return anything
    int b = *ptr;
    return 0;
}