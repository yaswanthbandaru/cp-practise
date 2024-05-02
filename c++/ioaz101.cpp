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



void solve(){
    int n ;
    string s;
    cin>>n>>s;
    string z,y;
    // cout<<s.length()<<endl;
    int l = s.length();
    for(int i=0; i<l;i++){
        if (s[i]=='.'){
            y = s.substr(0,i);
            z = s.substr(i+1,l);
        }
    }
    cout<<"y: "<<y<<"\t z: "<<z<<endl;
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