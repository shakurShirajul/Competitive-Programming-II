#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--){
        long long m,a,b,c,total=0;
        cin>>m>>a>>b>>c;
        if(m-a>0){
            total +=a;
        }else{
           total += m;
        }
        if(m-b>0){
            total +=b;
        }else{
            total += m;
        }
        if((2*m-total)>=c){
            total += c;
        }else{
            total += (2*m-total);
        }
        cout<<total<<endl;
    }
    return 0;
}