#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> g;

vector<int> color;

bool is_cycle = 0;

vector<int> parent;

vector<int> any_cycle;

/*

       0--1
       | /
       |/
       2--3


Input:
4 6
0 1
0 2
1 2 
2 0
2 3
3 3
*/

void dfs_cycle(int node, int par) 
{
	color[node] = 2;
	parent[node] = par;

	// cout<<"dfs :"<<node<<endl;

	for(auto v:g[node]) {
		if(color[v]==1) { // forward edge
			dfs_cycle(v, node);
		} else if(color[v]==2){ // backward edge
			if(is_cycle == 0) {
				int temp = node;
				while(temp != v) {
					any_cycle.push_back(temp);
					temp=parent[temp];
				}
				any_cycle.push_back(temp);
				reverse(any_cycle.begin(), any_cycle.end());
			}
			is_cycle = 1;
		} else if(color[v]==3){ // cross edge
			// unimportant 
		}
	}
	color[node] = 3;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("../input.txt","r", stdin);  
	freopen("../output.txt","w",stdout);
#endif

	int n,e;
	cin>>n>>e;

	g.resize(n+1);
	color.assign(n+1, 1);
	parent.resize(n+1, 0); 

	for(int i=0; i<e; i++){
		int v,w;
		cin>>v>>w;
		g[v].push_back(w);
	}

	for(int i=1; i<=n; i++){
		if(color[i]==1){
			dfs_cycle(i,0);
		}
	}

	if(is_cycle == 1) {
		cout<< "cycle exits"<<endl;
	} else {
		cout<< "cycle not exits"<<endl;
	}

	for(auto v:any_cycle){
		cout<<v<<" ";
	}
}