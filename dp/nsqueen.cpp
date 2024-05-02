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
#define gcd(a, b)   __gcd(a, b);
using ii = pair<int,int>;
typedef pair<int,int> pii;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<ii> VII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;


// global variables
int n;
int cnt;
vector<int> queens;

bool knight(int prow, int pcol, int row, int col){
    
}

bool check(int row, int col){
    for(int prow = 0; prow < row; ++prow){
        int pcol = queens[prow];
        if(pcol == col || abs(pcol-col) == abs(prow-row) || knight(prow,pcol,row,col)){
            return 0;
        }
    }

    return 1;
}

void rec(int level){
    // base case
    if(level == n){
        cnt++;
        return;
    }

    // choise
    for(int i=0; i<n;i++){
        if(check(i, level)){
            queens.pb(i);
            rec(level+1);
            queens.ppb();
        }
    }

    // check
}

void solve(){
    cin>>n;
    rec(0);
    cout<<cnt<<endl;
}

signed main(){
    fio;

#ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
#endif 

    // int t;cin>>t;
    int t = 1;
    while(t--){
        solve();
    }
}