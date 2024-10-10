#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int spf[1e6];
    for(int i=0;i<=1e6;i++){
        spf[i]=i;
    }
    for(int i=2;i*i<=1e6;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=1e6;j+=i){
                if(spf[j]==j){spf[j]==i;}
            }
        }
    }
    return 0;
}