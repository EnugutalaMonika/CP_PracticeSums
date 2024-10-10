#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int n;
    cin>>n;
    int divisors=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            int first_div=i;
            int second_div=n/i;
            if(first_div!=second_div){divisors+=2;}
            else{divisors++;}
        }
    }
    if(divisors==2){cout<<"prime"<<endl;}
    else{cout<<"not a prime"<<endl;}
    return 0;
}