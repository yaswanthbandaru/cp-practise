#include<bits/stdc++.h>
using namespace std;

#define fio         ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define int 		long long
#define pb  		push_back
#define ppb 		pop_back
#define pf 			push_front
#define pfb			pop_front
#define all(x) 		(x).begin(),(x).end()
#define fr 			first 
#define sc 			second 
#define rep(i,a,b)	for(int i=a;i<b;i++)
#define gcd(a, b)   __gcd(a, b)
#define yay         cout<<"YES"<<endl
#define nay         cout<<"NO"<<endl
using ii = pair<int,int>;
typedef pair<int,int> pii;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<ii> VII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;

void solve(){
    int x; cin>>x;
    int res = 0;
    map<int, int> mp;
    int curr = 0;
    for(int i=1; i<x; i++){
    	curr = __gcd(x,i) + i;
    	mp[curr] = i;
    	res = max(res, curr);
    }
    cout<<mp[res]<<endl;
}

signed main(){
    fio;

#ifndef ONLINE_JUDGE
    freopen("../../input.txt","r",stdin);
    freopen("../../output.txt","w",stdout);
#endif 

    int t;cin>>t;
    while(t--){
        solve();
    }
}