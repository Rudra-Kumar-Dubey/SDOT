#include <iostream>
    
    using namespace std;
    
    
    int main()
    {
        int amount;
        cin >> amount;
        int denominations[] = {1, 2, 5, 10, 20, 50, 100};
        int num_notes = 0;
        for (int i = 6; i >= 0; i--)
        {
            int num_denomination = amount / denominations[i];
            num_notes += num_denomination;
            amount -= num_denomination * denominations[i];
        }
        cout << num_notes << endl;
        return 0;
    }