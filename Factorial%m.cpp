#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int n,m;
    cin>>n>>m;
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=(ans%m)*(i%m);
        ans=ans%m;
    }
    cout<<"Factorial of n%m is "<<ans<<endl;
    return 0;
}