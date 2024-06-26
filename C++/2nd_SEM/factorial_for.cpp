#include <iostream>
using namespace std;
int main()
{
    int n;
    long f = 1;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else
    {
        for(int i = 1; i <=n; ++i)
        {
            f=f*i;
        }
        cout << "Factorial of " << n << " = " << f;    
    }

    return 0;
}