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
    int n;cin>>n;
    vector<int> v(n-1);
    for(int i=0; i<n-1; i++) {
        cin>>v[i];
    }

    vector<int> res(n);

    res[0] = v[0] +1 ;

    for(int i=1; i<n; i++){
        if((v[i-1] + res[i-1])%res[i-1] == v[i-1]){
            res[i] = res[i-1] + v[i-1];
        }
        else if(v[i-1] != 2 && (v[i-1])%res[i-1] == v[i-1] && v[i-1] != 0 && v[i-1] != 1){
            res[i] = v[i-1];
        }

    }

    for(int i=0; i<n; i++){
        cout<<res[i]<<" ";
    }cout<<"\n";
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