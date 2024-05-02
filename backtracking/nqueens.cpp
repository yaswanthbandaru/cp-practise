#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> reserved;
int cnt;
char a;
vector<int> queens;

bool check(int col, int row) {
    for(int prow=0; prow<row; ++prow) {
        int pcol = queens[col];
        if(pcol==col || abs(pcol-col)==abs(prow-row)) {
            return 0;
        }
    }
    return 1;
}

void rec(int level) {
    if(level == 8) {
        cnt++;
    }
    
    for(int col=0; col<8; col++) {
        if(check(col, level) && reserved[level][col] != 1) {
            queens.push_back(col);
            rec(level+1);
            queens.pop_back();
        }
    }
    
    return ;
}


void solve() {
    reserved.resize(8, vector<int>(8));
    for(int pow=0; pow<8;++pow){
        for(int col=0; col<8; ++col) {
            cin>>a;
            if(a == '*') {
                reserved[pow][col] = 1;
            }
        }
    }
    rec(0);
    cout<<cnt<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t=1;
    while(t--){
        solve();
    }
}
