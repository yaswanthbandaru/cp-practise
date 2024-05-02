/*
There are n students in AlgoZenith Course and m friendships between them. 
Your task is to divide the students into two teams in such a way 
that no two students in a team are friends. You can freely choose the s
izes of the teams. The size of each team should be positive
*/

#include<bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0); 

vector<vector<int>> g; // define graph



signed main() {
	IOS;

	int n,m;
	cin>>n>>m;
	g.resize(n+1);

	for(int i=0; i<m; i++){
		int a,b;
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
	}


	for(auto v: g) {
		
	}
}