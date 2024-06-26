#include <iostream>
using namespace std;
int main()
{
    int num, rev = 0;
    cout<<"Enter any number:";
    cin>>num;
    do
    {
      rev = rev * 10;
      rev = rev + num % 10;
      num=num/10;
    }while(num > 0);
    cout<<"Reversed number is: "<<rev;
    return 0;
}