// Faster than naive solution
// Sieve of Erasthones tc o(nlog(log(sqrt(n))))
#include<bits/stdc++.h>
using namespace std;
#define int long long
int main(){
    int isprime[1e6];
    for(int i=0;i<=1e6;i++){
        isprime[i]=1;
    }
    isprime[0]=0;
    isprime[1]=0;
    for(int i=2;i*i<=1e6;i++){
        if(isprime[i]==1){
            for(int j=i*i;j<=1e6;j+=i){
                isprime[j]=0;
            }
        }
    }
    return 0;
}