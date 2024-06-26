#include <iostream>

using namespace std;

int CountDigitOccurrences(int I, int u, int x)
{
    int count = 0;
    for (int i = I; i <= u; i++)
    {
        string num_str = to_string(i);
        for (char c : num_str)
        {
            if (c == x + '0')
                count++;
        }
    }
    return count;
}

int main()
{
    int I, u, x;
    cin >>I>>u>>x;
    cout <<CountDigitOccurrences(I, u, x) << endl;
    return 0;
}