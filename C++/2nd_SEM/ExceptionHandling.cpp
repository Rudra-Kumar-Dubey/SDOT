//Exception handling
//1. Logical Error
//2. Compilation Error
//3. run time error
//problem->solution->error in logic->logical error
//any programming language have some set of rules-->
//run->program error free
//the error that occcured at run time->run time error
//Exception Handling in C++
//1. try
//2. throw
//3. catch
//identity
/*
try
{
    stat1;
    stat2;
    stat3;
    throw excep;
}
*/
//throw excep;
/*catch()
{
    stat4;
    //action to ne taken for the exception thrown by 
    //throw keyword from a try block
}
*/
//divsion by 0 exception
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter a and b values"<<endl;
    cin>>a>>b;
    try
    {
        if(b!=0)
        cout<<a/b;
        else
        throw b;   //throw 144 ->same output here but here  not important
    }
    catch(int i)
    {
        cout<<"Division By Zero Exception "<<i<<endl; // i show the throw value
    }
    return 0;
    //2/1->2
    //10/2->5
    //10/0->Undefined->Exception
}