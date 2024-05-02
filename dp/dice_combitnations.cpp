/*
Your task is to count the number of ways to construct sum n by throwing a dice one or more times. Each throw produces an outcome between 1 and 6.

For example, if n=3, there are 4 ways:
1+1+1
1+2
2+1
3


Input

The only input line has an integer n.

Output

Print the number of ways modulo 109+7.

Constraints

    1≤n≤106
Example

Input:
3

Output:
4
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

#define int long long

int dp[1000100];
const int mod = 1e9+7;

void solve() {
    int n;
    cin>>n;
    // cout<<"n: "<<n<<endl;
    for(int i=0; i<=n ;i++){
        if(i==0){
            dp[i] = 1;
        }else {
            dp[i] = 0;
            for(int j=1; j<=6; j++){
                if(j<=i) dp[i] += dp[i-j];
            }
            dp[i] %= mod;
        }
    }
    cout<<dp[n]<<endl;
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