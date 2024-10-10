#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
         int count=0;
        for(int j=1;j<=sqrt(a[i]);j++){
            if(a[i]%j==0){
                int fd=j;
                int sd=a[i]/j;
                if(fd!=sd){count+=2;}
                else{count++;}
            }
        }
        if(count==3){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
    }

    return 0;
}