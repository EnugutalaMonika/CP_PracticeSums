#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    const int max=1e6;
    int isprime[max+1];
    for(int i=0;i<=max;i++){
        isprime[i]=1;
    }
    isprime[0]=0;
    isprime[1]=0;
    for(int i=2;i*i<=max;i++){
        if(isprime[i]==1){
            for(int j=i*i;j<=max;j+=i){
                isprime[j]=0;
            }
        }
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=0;
        if(n<=4){cout<<0<<endl;}
        else{
            for(int c=5;c<=n;c++){
                if(isprime[c]==1){
                    int b=c-2;
                    if(isprime[b]==1){count++;}
                }
            }
             cout<<count<<endl;
        }
    }
    return 0;
}