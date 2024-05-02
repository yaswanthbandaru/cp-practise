/* 
Given an array arr[] of positive numbers, The task is to find the maximum sum of 
a subsequence such that no 2 numbers in the sequence should be adjacent in the array.

Input: arr[] = {5, 5, 10, 100, 10, 5}
Output: 110
Explanation: Pick the subsequence {5, 100, 5}.
The sum is 110 and no two elements are adjacent. This is the highest possible sum.

Input: arr[] = {3, 2, 7, 10}
Output: 13
Explanation: The subsequence is {3, 10}. This gives sum = 13.
This is the highest possible sum of a subsequence following the given criteria
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
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int dp[n][2];
    // dp[n][0] excluding this one 
    // dp[n][1] including this one
    dp[0][0] = 0; dp[0][1] = v[0];
    if (n==1) {
        cout<<v[0]<<endl;
    }
    for(int i=1;i<n;i++){
        dp[i][1] = dp[i-1][0] + v[i];
        dp[i][0] = max(dp[i-1][0], dp[i-1][1]);

        // cout<<"exclude i: "<<dp[i][0]<<"\t include i: "<<dp[i][1]<<endl;
    }

    cout<<max(dp[n-1][0], dp[n-1][1])<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
#endif 

    int t;cin>>t;
    // int t = 1;
    while(t--){
        solve();
    }
}