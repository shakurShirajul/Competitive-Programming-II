#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string str;
        bool flag = false;
        cin >> str;
        int len = str.size();

        for (int i = 0; i < len - 1; i++)
        {
            if (str[i] == str[i + 1])
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << str.size() << endl;
        }
    }
    return 0;
}
