#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<vector<int>> g;

vector<int> vis;

int nodeVisited = 0;

void dfs (int node) {
	vis[node] = 1;
	nodeVisited++;
	for(auto v:g[node]) {
		if(!vis[v]) {
			dfs(v);
		}
	}
}

/* 
5 3
1 2
2 3
4 5
*/


void solve() {
	cin>>n>>m;

	g.clear(); // for testcase
	g.resize(n+1);
	vis.assign(n+1, 0);
	for(int i=0; i<m; i++){
		int a,b;
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
	}

	vector<int> compsz;

	for(int node = 1; node<=n; node++){
		if(!vis[node]) {
			nodeVisited = 0;
			dfs(1);
			cout<<nodeVisited<<endl;
		}
	}
}

signed main() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt","r", stdin);  
	freopen("../output.txt","w",stdout);
#endif

	//solution code
	int t;cin>>t;
	while(t--)
		solve();
}