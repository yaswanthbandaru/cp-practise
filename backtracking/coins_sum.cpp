/*
You have n coins with certain values. Your task is to find all money sums you can create using these coins.

Input

The first input line has an integer n: the number of coins.

The next line has n integers x1,x2,…,xn: the values of the coins.

Output

First print an integer k: the number of distinct money sums. After this, print all possible sums in increasing order.

Constraints

    1≤n≤100


1≤xi≤1000


Example

Input:
4
4 2 5 2

Output:
9
2 4 5 6 7 8 9 11 13
*/
#include<bits/stdc++.h>
using namespace std;

#define For(i,x,y) for(int i=(x); i<(y); i++)

set<int> s;
vector<int> v;
int n;
vector<int> sol;

void rec(int level){
    //base 
    if(level == n){
        int sum = 0;
        for(auto i:sol){
            sum += i;
        }
        s.insert(sum);
        return;
    }
    
    sol.push_back(v[level]);
    rec(level + 1);
    sol.pop_back();
    rec(level + 1);
}


void solve(){
    cin>>n;
    v.resize(n);
    For(i, 0, n) cin>>v[i];
    rec(0);
    s.erase(0);
    cout<<s.size()<<endl;
    for(auto j: s){
        cout<<j<<" ";
    }
}

signed main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
}