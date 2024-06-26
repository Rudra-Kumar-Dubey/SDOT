#include <iostream>
#include <string>

using namespace std;

int cyclic_xor(string A, string B) {
    int count = 0;
    int n = A.size();
    for (int i = 0; i < n; i++) {
        bool is_zero = true;
        for (int j = 0; j < n; j++) {
            if (A[j] != B[(i + j) % n]) {
                is_zero = false;
                break;
            }
        }
        if (is_zero) count++;
    }
    return count;
}

int main() {
    string A,B;
    cin>>A>>B;
    cout << cyclic_xor(A, B) << endl; 
    return 0;
}