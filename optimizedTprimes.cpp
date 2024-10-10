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
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){cin>>a[i];}
    for(int i=0;i<n;i++){
        int k=sqrt(a[i]);
        if(isprime[k]==1 && k*k==a[i]){
            cout<<"YES"<<endl;
        }
        else{cout<<"NO"<<endl;}
    }
    return 0;
}