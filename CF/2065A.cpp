#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
       string str;
       cin>>str;
       int len = str.size();
       str[len-2] = 'i';
       str.pop_back();
       cout<<str<<endl;
    }
    return 0;
}