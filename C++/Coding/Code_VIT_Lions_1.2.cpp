#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string input;
    getline(cin, input);
    vector<string> items;
    size_t pos = 0;
    string token;
    while ((pos = input.find("-")) != string::npos) {
        token = input.substr(0, pos);
        items.push_back(token);
        input.erase(0, pos + 1);
    }
    items.push_back(input);
    sort(items.begin(), items.end());
    for (auto i = items.begin(); i != items.end(); ++i) {
        if (i != items.begin()) {
            cout << "-";
        }
        cout << *i;
    }
    cout << std::endl;
    return 0;
}