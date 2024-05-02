/*
7 4
1 2
2 3
3 4
5 6
*/

#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<vector<int>> g;
vector<int> visited;
vector<int> islandNumber;

int prod = 1;


void dfs(int st){
    stack<int> s;
    s.push(st);
    visited[st]=1;
    islandNumber[st] = 1;
    while(!s.empty()){
        int p = s.top();
        // cout<<p<<" ";
        s.pop();
        for(auto v:g[p]){
            if(visited[v]==0){
                s.push(v);
                visited[v]=1;
                islandNumber[st]++;
            }
        }
    }
    // cout<<endl;
    // cout<<islandNumber[st]<<endl;

    prod = prod * islandNumber[st];
}

signed main() {
#ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
#endif 
    cin>>n>>m;
    g.resize(n+1);
    visited.assign(n+1,0);
    islandNumber.assign(n+1,0);
    int cnt = 0;
    for(int i=0; i<m;i++){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    for(int i=1;i<=n;i++){
        if(visited[i]==0){
            dfs(i);
            cnt++;
        }
    }
    if(cnt==1){
        prod = 0;
    }
    cout<<prod<<endl;
}