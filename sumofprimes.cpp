#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int max=1e6;
    vector<int>isprime(max+1,1);
    isprime[0]=0;
    isprime[1]=0;
    for(int i=2;i*i<=max;i++){
        if(isprime[i]==1){
            for(int j=i*i;j<=max;j+=i){
                isprime[j]=0;
            }
        }
    }
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        int sum=0;
        for(int i=1;i<=n;i++){
            if(n%i==0 && isprime[i]==1){sum+=i;}
        }
        cout<<sum<<endl;
    }
    return 0;
}