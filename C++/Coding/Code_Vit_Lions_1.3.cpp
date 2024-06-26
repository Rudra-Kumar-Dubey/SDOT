#include <iostream>

using namespace std;

int main()
{
    // Read n from the standard input
    int n;
    cin >> n;

    // Initialize the sum to 0
    int sum = 0;

    // Iterate over all the numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        // If the number is a multiple of 3 or 5, add it to the sum
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    // Print the sum
    cout << sum << endl;

    return 0;
}