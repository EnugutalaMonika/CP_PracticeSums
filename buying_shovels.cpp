#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;
    cin>>t;
    while(t--){
       int n,k;
       cin>>n>>k;
       vector<int>div;
       for(int i=1;i*i<=n;i++){
        if(n%i==0){div.push_back(i);div.push_back(n/i);}
       }
       for(int i=0;i<div.size();i++){
        if(div[i]<=k){ans=min(ans,n/div[i]);}
       }
       cout<<ans<<endl;
    /* Time Limit Exceeded
       int ans=n;
       for(int i=1;i<=k;i++){
        if(n%k==0){ans=min(ans,n/k);}
       }
       cout<<ans<<endl; */
    }
    return 0;
}