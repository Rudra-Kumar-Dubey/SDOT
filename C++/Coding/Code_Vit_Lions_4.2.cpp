#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    int T, S;
    cin >> T >> S;
    int integers[T];
    for (int i = 0; i < T; i++)
        cin >> integers[i];

    
    int num_ways = T * (T - 1) * (T - 2) / 6;
    int num_successes = 0;
    for (int i = 0; i < T; i++)
    {
        if (S == integers[i])
            num_successes++;
    }
    num_successes = num_successes * (num_successes - 1) * (num_successes - 2) / 6;
    int divisor = gcd(num_successes, num_ways);
    cout << num_successes / divisor << "/" << num_ways / divisor << endl;

    return 0;
}