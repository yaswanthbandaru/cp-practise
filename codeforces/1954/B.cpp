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
    vector<int> v(n);
    map<int, int> mp;
    rep(i,0,n){
        cin>>v[i];
        mp[v[i]] += 1;
    }


    if(mp.size() == 1 ){
        // cout<<"all same"<<endl;
        cout<<-1<<endl;
    }else {
        // int ans = v[0];
        // int res = 0;
        // rep(i, 1, n-1){
        //     if(v[i] != ans){
        //         res = min(i, n-i-1);
        //     }
        // }

        // int res2 = n-1;
        // int l=0;int r = n-1;
        // int cnt =0;
        // while(l <= r){
        //     if(v[l] != ans && v[r] != ans && v[l] != v[r]){
        //         res2 = min(res2, r-l-1);
        //     }

        //     if(cnt%2 == 0){
        //         l++;
        //     }else if(cnt%2){
        //         r--;
        //     }
        //     cnt++;
        // }

        int res = n;
        int curr = 1;
        rep(i,0,n-1){
            if(v[i] == v[i+1]){
                curr++;
            }else{
                res = min(res, curr);
                curr = 1;
                i++;
            }
        }

        res = min(res, curr);


        cout<<res<<endl;
    }

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