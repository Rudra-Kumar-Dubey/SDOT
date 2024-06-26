#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0,i = 1;

    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Fibonacci Series:0, ";
    do
    {
        i++;
        if(i == 1) 
        {
            cout << t1 << ", ";
            continue;
        }
        if(i == 2) 
        {
            cout << t2 << ", ";
            continue;
        }
        
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        
        cout << nextTerm << ", ";    
    }while(i<n);
    return 0;
}