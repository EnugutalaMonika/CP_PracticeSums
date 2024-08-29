#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int n;
    cin>>n;
    pair<int,int>a[n];
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
    }
    int aoki=0,taksh=0;
    for(int i=0;i<n;i++){
        aoki=aoki+a[i].first;
    }
    sort(a,a+n);
    int ans=0,i=n-1;
    while(aoki>=taksh){
        ans++;
        taksh=taksh+a[i].first+a[i].second;
        aoki=aoki-a[i].first;
        i--;
    }
    cout<<ans<<endl;
    return 0;
}