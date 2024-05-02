
#include<bits/stdc++.h>
using namespace std;

int n;
string s;

int rec1(int l, int r){
    if(l >= r) return 1;
    int ans = 0;
    if(rec1(l+1,r-1) && (s[l] == s[r])) ans = 1;
    return ans;
}

int rec2(int i){

}

void solve(){
    s = "abacacadaca";
    n = s.length();

}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    while(t--) solve();
}