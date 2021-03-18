#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(101);
    for(int i=0;i<n;i++) cin>>a[i],b[a[i]]++;
    for(int i=0;i<=100;i++){
        if(b[i]>0){
            cout<<i<<" ";
            b[i]--;
        }
    }
    for(int i=0;i<=100;i++){
        for(int j=0;j<b[i];j++){
            cout<<i<<" ";
        }
    }
    cout<<"\n";
}
                
int main(){

#ifndef ONLINE_JUDGE

          freopen("input.txt", "r", stdin);
         freopen("output.txt", "w", stdout);
 #endif
            int t;
            cin>>t;
            for(int i=1;i<=t;i++){
               
                solve();
    }
    return 0;
}
