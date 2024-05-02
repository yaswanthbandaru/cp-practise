#include<bits/stdc++.h>
using namespace std;

/*
6 6
1 2
2 3
1 4
3 4
4 5
4 6
1
6
*/

#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int n,m;
int dist[100100];
vector<vector<int> > g;


void bfs(int st){
    for(int i=1; i<=n; i++){
        dist[i] = 1e9;
    }
    dist[st] = 0;
    queue<int> q;
    q.push(st);
    while (!q.empty())
    {
        /* code */
        int cur = q.front();
        q.pop();
        for(auto v:g[cur]){
            if(dist[v] > dist[cur]+1){
                dist[v] = dist[cur]+1;
                q.push(v);
            }
        }
    }
    
}


signed main() {
    IOS;

#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt","w",stdout);
#endif 

    cin>>n>>m;
    g.resize(n+1);
    for(int i=0; i<m; i++){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
    }
    int st,en;cin>>st>>en;
    bfs(st);
    cout<<dist[en]<<endl;
}