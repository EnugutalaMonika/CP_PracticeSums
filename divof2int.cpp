#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>div(n);
    for(int i=0;i<n;i++){
        cin>>div[i];
    }
    sort(div.begin(),div.end());
    cout<<div[n-1]<<" ";
    int l=div[n-1];
    for(int i=n-1; i>=0; i--) {
        if(div[i]==div[i-1]) continue;
        if(l%div[i]==0){div.erase(div.begin()+i);}  
    }
    int k=div.size();
    cout<<div[k-1];
    return 0;
}