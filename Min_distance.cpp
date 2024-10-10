#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=n+1;
    for(int i=0;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(a[i]==a[j]){
               ans=min(ans,j-i);
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}