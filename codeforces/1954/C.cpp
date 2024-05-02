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
    string x,y;
    cin>>x;
    cin>>y;
    int n=x.length();
    // cout<<n<<endl;
    rep(i,0, n){
        if((x>y && x[i] > y[i]) || (x<y && x[i]<y[i])) swap(x[i], y[i]);
    }
    cout<<x<<endl;
    cout<<y<<endl;
    
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