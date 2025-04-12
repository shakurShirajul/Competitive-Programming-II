#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s1,s2;
        set<char> setChar;
        cin>>s1;
        for(int i=0;i<s1.size();i++){
            setChar.insert(s1[i]);
        }
        if(setChar.size() == 1){
            cout << "NO" << endl;
        }else{
            cout<<"YES"<<endl;
            s2 = s1;
            reverse(s2.begin(), s2.end());
            if(s2!=s1){
                cout << s2 << endl;
            }else{
                sort(s2.begin(), s2.end());
                cout << s2 << endl;
            }
        }
    }
    return 0;
}
