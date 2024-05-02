/* 

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

bool relative_sort(const pis &v1,const pis &v2) {
    return v2.fr > v1.fr;
}

void solve(){
    string s;
    cin>>s;
    int sum = 0;
    for(auto v:s){
        sum += v - '0';
    }
    cout<<sum<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
#endif 

    int t;cin>>t;
    while(t--){
        solve();
    }
}