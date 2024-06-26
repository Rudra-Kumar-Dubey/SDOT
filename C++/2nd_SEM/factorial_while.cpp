#include <iostream>
using namespace std;
int main()
{
    int n;
    long f = 1;
    int i = 1;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else
    {
        while(i<=n)
        {
            f=f*i;
            i++;
        }
        cout<<"Factorial of "<<n<<"="<<f;  
    }

    return 0;
}