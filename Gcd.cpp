// inbuilt function for gcd : __gcd(a,b)
#include<bits/stdc++.h>
using namespace std;
#define int long long
// Euclidean Algorithm for GCD tc o(logn)
int gcd(int a,int b){
    if(b==0){return a;}
    else{return gcd(b,a%b);}
}
int32_t main(){
    // general method with tc o(n)
    int a,b;
    cin>>a>>b;
    int fac=min(a,b);
    int gcd;
    for(int i=fac;i>=1;i--){
        if(a%i==0 && b%i==0){gcd=i;break;}
    }
    cout<<gcd<<endl;
    return 0;
}