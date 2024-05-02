/*
Link:https://codeforces.com/contest/1736/problem/A

*/

#include<bits/stdc++.h>
using namespace std;

#define fio         ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define int 		long long
#define pb  		push_back
#define ppb 		pop_back
#define pf 			push_front
#define ppf 		pop_front
#define all(x) 		(x).begin(),(x).end()
#define fr 			first 
#define sc 			second 
#define rep(i,a,b)	for(int i=a;i<b;i++)
#define gcd(a, b)   __gcd(a, b);
using ii = pair<int,int>;
typedef pair<int,int> pii;
typedef pair<int, string> pis;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<ii> VII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;


void solve() {
    int n;cin>>n;
    int a[n];
    int b[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n; i++)
        cin>>b[i];
    
    map<int, int> ma,mb;

    for(int j=0;j<n;j++){
        ma[a[j]]++;
        mb[b[j]]++;
    }

    int cnt=0;
    for(int i=0; i<n;i++){
        if(a[i]^b[i]){
            cnt++;
        }
    }
    // cout<<ma[1]<<" "<<mb[1]<<" "<<cnt<<endl;

    if(cnt==0){
        cout<<0<<endl;
    }else if(ma[1] == mb[1] && cnt){
        cout<<1<<endl;
    }else if(ma[1] != mb[1] || cnt) {
        
    }
}


signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
#endif 

    int t;cin>>t;
    // int t = 1;
    while(t--){
        solve();
    }
}