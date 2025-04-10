#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        cout<<str[0]-'0'+str[1]-'0'<<endl;
    }
    return 0;
}