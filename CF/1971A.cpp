#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        cout<<min(a,b)<<" "<<max(a,b)<<endl;  
    }
    return 0;
}
