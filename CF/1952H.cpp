#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str, str1;
        cin >> str;
        str1 = str;
        reverse(str.begin(), str.end());
        if (str == str1 && str.size() > 1)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }
}