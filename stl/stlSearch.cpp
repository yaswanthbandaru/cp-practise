/* 
You are given an array A of size N. You have to answer the following queries

    1 x - Find the smallest Element ≥ x 
    2 x - Find the smallest Element > x 
    3 x - Find the number of elements ≤ x
    4 x - Find the number of elements < x

If the answer does not exist print -1.

Input:
2
5 4
1 2 2 3 4
1 2
2 2
3 4
3 2
3 2
5 5 5
3 5
4 5
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
    int n,q;cin>>n>>q;
    vector<int> v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    for(int j=0;j<q;j++){
        int c,x;
        cin>>c>>x;
        switch (c)
        {
        case 1:
            /* code */
            break;
        
        case 2:
            break;

        case 3:
            break;

        case 4:
            break;
        
        default:
            break;
        }
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