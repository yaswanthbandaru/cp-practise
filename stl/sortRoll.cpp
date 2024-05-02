/* 
You are given a list of N students with their name and roll
number. Sort the list according to their roll numbers
Input:
2
5
amelia 21
sophia 12
emma 11
ava 8
isabel 1
3
alice 34
bob 20
hannah 5
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
    int n;cin>>n;
    vector<pis> V;
    for(int i=0; i<n;i++){
        string name;
        int roll;
        cin>>name >> roll;
        V.pb(make_pair(roll,name));
    }

    sort(V.begin(), V.end(), relative_sort);

    for(auto v: V){
        cout<<v.sc<<" "<<v.fr<< endl;
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
    while(t--){
        solve();
    }
}