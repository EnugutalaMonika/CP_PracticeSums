#include<bits/stdc++.h>
using namespace std;
#define int long long
int main(){
    int max=1e6;
    vector<int>isprime(max+1,1);
    vector<int>sum(max+1);
    isprime[0]=0;
    isprime[1]=0;
    for(int i=2;i<=max;i++){
        if(isprime[i]==1){
            for(int j=i;j<=max;j+=i){
               if(j>i){isprime[j]=0;}
               sum[j]+=i;
            }
        }
    }
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        cout<<sum[n]<<endl;
    }
    return 0;
}