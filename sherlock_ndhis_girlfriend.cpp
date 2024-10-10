#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int max=1e6;
    vector<int>isprime(max+1,1);
    isprime[0]=0;
    isprime[1]=0;
    for(int i=2;i*i<=1e6;i++){
        if(isprime[i]==1){
            for(int j=i*i;j<=1e6;j+=i){
                isprime[j]=0;
            }
        }
    }
    int n;
    cin>>n;
    if(n<3){cout<<1<<endl;}
    else{cout<<2<<endl;}
    for(int i=2;i<=n+1;i++){
        if(isprime[i]&&n<3){cout<<1<<endl;}
       if(isprime[i]){cout<<2<<endl;}
       else{cout<<1<<endl;}
    }
    return 0;
}
