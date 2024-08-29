#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main() {
    int n,p1,p2,p3,t1,t2,count=0;
    cin>>n>>p1>>p2>>p3>>t1>>t2;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
        int td=v[i].second-v[i].first;
        count=count+td*p1;
    }
    if(n>1){
       for(int i=0;i<n-1;i++){
          int ti=abs(v[i].second-v[i+1].first);
          if(ti<=t1){count+=ti*p1;}
          else if(ti>t1&&ti<=(t1+t2)){count+=(t1*p1)+(ti-t1)*p2;}
          else{count+=(t1*p1)+(t2*p2)+((ti-t1-t2)*p3);}
       } 
    }
    cout<<count<<endl;
    return 0;
}
