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
    vector<int>tuple(max+1);
    tuple[0]=tuple[1]=tuple[2]=tuple[3]=0;
    for(int c=4;c<=max;c++){
        int b=c-2;
        tuple[c]=tuple[c-1];
        if(isprime[b]==1 && isprime[c]==1){tuple[c]++;}
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<tuple[n]<<endl;
    }
    return 0;
}