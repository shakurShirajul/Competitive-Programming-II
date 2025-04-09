#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        bool flag = false;
        int num = 1;
        for(int i=str.size()-1;i>=0;i--){
           if(str[i]!='0'){
                flag = true;
            }else if(flag){
                num++;
            }
        }
        cout<<str.size()-num<<"\n";
    }
    return 0;
}