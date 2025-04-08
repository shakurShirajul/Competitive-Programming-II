#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arrA[n], arrB[n];
        set<int> s;
        set<int>::iterator it;
        for(int i=0;i<n;i++){
            cin>>arrA[i];
            s.insert(arrA[i]);
        }
        int j = 0;
        for(int i : s){
            arrB[j] = i;
            j++;
        }
        for(int i=s.size();i<n;i++){
            arrB[i] = arrB[i-1]+1;
        }
        for(int i=0;i<n;i++){
            cout<<arrB[i]<<" ";
        }
        cout<<endl;
     
    }
    return 0;
}