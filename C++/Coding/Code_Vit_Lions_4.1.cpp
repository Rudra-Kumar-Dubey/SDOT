#include <iostream>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int len = s.length();
    int count = 0;
    int ans = 0;
    for(int i = 0 ; i <= len ; i++){
        if(s.substr(i , 1) == " "){
            count = 0;
            continue;
        }
        cout<<s.substr(i , 1)<<endl;
        count += 1;
        ans = max(count , ans);
    }
    cout<<ans;
    return 0 ;
}