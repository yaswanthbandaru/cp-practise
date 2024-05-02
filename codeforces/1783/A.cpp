#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> v(n);
    set<int> s;
    int sum = 0;
    
    for(int i=0;i<n;++i){
        cin>>v[i];
        // cout<<v[i]<<" ";
        if(s.count(v[i])){

        }
        sum += v[i];
    }
    // cout<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif 
    int t;cin>>t;
    while(t--)solve();
}