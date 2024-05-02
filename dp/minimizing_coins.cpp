
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

#define int long long

int n;
int dp[1000100];
int done[1000100];
const int mod = 1e9+7;



void solve() {
    int x;cin>>n>>x;
    int v[n];
    rep(i,0,n) cin>>v[i];

    for(int i=0; i<=x; i++){
        if(i==0){
            dp[i] = 0;
        }else {
            dp[i] = 1e9;
            for(int j=0; j<n; j++){
                if(v[j] <= i) dp[i] = min(dp[i], 1 + dp[i-v[j]]);
            }
        }
    }
    if(dp[x] != 1e9) cout<<dp[x]<<endl;
    else cout<<-1<<endl;
}


signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
#endif 

    // int t;cin>>t;
    int t = 1;
    while(t--){
        solve();
    }
}