#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n,cnt=0,even=0,odd=0;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            a[i]%2==0?even++:odd++;
            if(i%2!=a[i]%2){
                cnt++;
            }
        }
        // cout<<cnt<<endl;
        if(cnt%2!=0){
            cout<<-1<<endl;
        }else{
            if(even==((n/2)+n%2)){
                cout<<cnt/2<<endl;
            }else{
                cout<<-1<<endl;
            }
        }
    }
    return 0;
}