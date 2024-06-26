#include <iostream>
using namespace std;
int main()
{
    char str1[10], str2[10];
    int i = 0, check = 0;
    cout << "enter first string";
    cin >> str1;
    cout << "enter second string";
    cin >> str2;
    while (str1[i] != '\0' || str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            check = 1;
            break;
        }
        i++;
    }
    if (check == 0)
    {
        cout << "the strings are equal";
    }
    else
    {
        cout << "they are not equal";
    }
    return 0;
}
//int a[3] -->10 20 30 --->0 1 2.....a[0]--->10,a[2]---->20
//abc'\0'
//adcṇ