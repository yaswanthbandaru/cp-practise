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
#define gcd(a, b)   __gcd(a, b);
using ii = pair<int,int>;
typedef pair<int,int> pii;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<ii> VII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;

const int N = 1e5+7;
bool dp[N];
vector<int> bd;

void solve(){
    vector<int> binaryDecimal;
    
}

signed main(){
    fio;

#ifndef ONLINE_JUDGE
    freopen("../../input.txt","r",stdin);
    freopen("../../output.txt","w",stdout);
#endif 

    bd.pb(1);
    for(int i=0; i<bd.size(); i++){
        if(10 * bd[i] >= N) continue;
        bd.pb(10 * bd[i]);
        bd.pb(10 * bd[i] + 1);
    }


    dp[1] = 1;
    dp[0] = 1;
    for(int i=2; i<N; i++){
        for(auto x: bd){
            if(i%x == 0) dp[i] |= dp[i/x];
        }
    }

    int t;cin>>t;
    solve();
    while(t--){
        int n; cin>>n;
        cout<<(dp[n] ? "YES" : "NO" )<< endl;
    }
}