#include<bits/stdc++.h>
using namespace std;

#define int  long long int
#define  endl '\n'

int N = 200010;
int mod = 1e9+7;
int inf = 1e9;

int sub(int a, int b){
    return (a%mod - b%mod)%mod;
}

int mul(int a,int b){
    return (a%mod * b%mod)%mod;
}

int inv(int a){
    a %= mod;
    if(a < 0) a += mod;
    int b = mod, u = 0, v = 1;
    while(a) {
        int t = b/a;
        b -= t * a;swap(a,b);
        u -= t * v;swap(u,v);
    }
    assert(b==1);
    if(u<0) u += mod;
    return u;
}

int solve() {
    int n;cin>>n;
    if(n<4) return 0;
    int ans = mul(n,n-1);
    ans = mul(ans, n-2);
    ans = mul(ans, n-3);
    ans = mul(ans, inv(24));
    return ans;
}

signed main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int t;cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}