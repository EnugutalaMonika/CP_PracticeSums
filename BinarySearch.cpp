#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<k;i++){
          int x;
          cin>>x;
          int l=0,h=n-1;
          while(l<=h){
          int mid=l+(h-l)/2;
          if(a[mid]==x){cout<<"YES"<<endl;}
          else if(a[mid]>x){h=mid-1;}
          else if(a[mid]<x){l=mid+1;}
          else{cout<<"NO"<<endl;}
        }
    }
    return 0;
}