#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool solve(ll n, ll m){
    if(n==1){
        return true;
    }
    if(m==1){
        return true;
    }
    if(n==2 and m==2){
        return true;
    }
    return false;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n,m;
        cin>>n>>m;
        if(solve(n,m)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}