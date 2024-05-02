/*
Zenithland has n cities and m roads between them. The goal is to
construct new roads so that there is a route between any two 
cities. A road is bidirectional.
Your task is to find out the minimum number of roads required.

Input:
4 2
1 2
3 4
*/

#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<vector<int>> g;

vector<int> visited;

void bfs(int st){
    queue<int> q;
    q.push(st);
    visited[st] = 1;
    while(!q.empty()){
        int p = q.front();
        q.pop();
        for(auto v:g[p]){
            // cout<<v<<endl;
            if(visited[v]==0){
                q.push(v);
                visited[v]=1;
            }
        }
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
#endif

    cin>>n>>m;
    g.resize(n+1);
    visited.assign(n+1, 0);
    for(int i=0; i<m;i++){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }


    
    int cnt=0;
    
    for(int j=1; j<=n;j++){
        if(visited[j]==0){
            bfs(j);
            cnt++;
        }
    }
    
    if(cnt){
        cout<<cnt-1<<endl;
    }
    // else {
    //     cout<<cnt<<endl;
    // }
    
    return 0;
}