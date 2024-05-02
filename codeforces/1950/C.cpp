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

int stringToInt(string s){
    int a = s[0] - '0';
    int b = s[1] - '0';
    return 10 * a + b; 
}

string intToString(int n){
    if (n < 10){
        if(n == 0) return "12";
        string s = "0";
        s += to_string(n);
        return s;
    }
    return to_string(n);
}

void solve(){
    string s;cin>>s;
    string hour = s.substr(0,2);
    string minutes = s.substr(3,2);
    int time = stringToInt(hour);
    string ampm = "AM";
    if(time > 12){
        time -= 12;
        ampm = "PM";
    }
    if(time == 12) ampm = "PM";
    cout<<intToString(time)<<":"<<minutes<<" "<<ampm<<endl;
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