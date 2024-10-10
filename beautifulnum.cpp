#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>queries(k);
    for(int i=0;i<k;i++){
     cin>>queries[i];
     int l=0,h=n-1;
     while(l<=h){
        int mid=l+(h-l)/2;
        int ans=n+1;
        if(a[mid]<=queries[i]){
            ans=min(ans,i+1);}
        else if(a[mid]>queries[i]){
            h=mid-1;
        }
    }
      cout<<ans<<endl;
    }
    
    return 0;
}