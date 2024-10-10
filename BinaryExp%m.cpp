#include<bits/stdc++.h>
#define int long long
using namespace std;
int binary_exp(int x,int n,int m){
    if(n==0){return 1;}
    if(n%2==0){return binary_exp(((x%m)*(x%m))%m,n/2,m);}
    else{return ((x%m)*(binary_exp(((x%m)*(x%m))%m,(n-1)/2,m))%m);}
}
int be_usgloop(int x,int n,int m){
    int ans=1;
    while(n!=0){
        if(n%2==1){
            ans=((ans%m)*(x%m))%m;
        }
        x=((x%m)*(x%m))%m;
        n=n/2;
    }
    return ans;
}
int32_t main(){
    int x,n,m;
    cin>>x>>n>>m;
    int ans=binary_exp(x,n,m);
    cout<<ans<<endl;
    return 0;
}