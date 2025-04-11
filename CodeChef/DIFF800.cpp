#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;
	while(t--){
	    double a,b,c;
	    cin>>a>>b>>c;
	    if(((a+b)/2)>c){
	        cout<<"YES\n";
	    }else{
	        cout<<"NO\n";
	    }
	}
	return 0;
}
