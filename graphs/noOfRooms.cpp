/*
You are given a map of a building, and your task is to count the 
number of its rooms. The size of the map is n × m squares, 
and each square is either floor or wall. You can walk left, 
right, up, and down through the floor squares.

Input:
5 8
########
#..#...#
####.#.#
#..#...#
########

*/

#include<bits/stdc++.h>
using namespace std;


#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define f first;
#define S second;

using ii = pair<int,int>;


int n,m;
vector<string> g;
int visited[1000][1000] = {0};

int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};

bool inside(int x, int y) {
	if(x < 0 || x >= n || y < 0 || y >= m || g[x][y] == '#') return 0;
	else return 1;
}


void bfs(ii st){
	queue<ii> q;
	q.push(st);
	visited[st.first][st.second] = 1;
	while(!q.empty()){
		ii cur = q.front();
		// visited[cur.first][cur.second] = 1;
		q.pop();
		for(int k=0; k<4;k++){
			if(!inside(cur.first+dx[k], cur.second + dy[k]) ) continue;
			ii neigh = {cur.first+dx[k], cur.second + dy[k]};
			if(visited[neigh.first][neigh.second]==0){
				q.push(neigh);
				visited[neigh.first][neigh.second]=1;
			}
		}
	}
}


signed main() {
	IOS;

#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	cin>>n>>m;
	g.resize(n);
	for(int i=0; i<n; i++){
		cin>>g[i];
	}

	// for(int i=0;i<n; i++){
	// 	for(int j=0;j<m;j++){
	// 		visited[i][j]==0;
	// 	}
	// }

	int cnt = 0;

	for(int i=0; i<n; i++){
		for(int j=0; j<m;j++){
			if(g[i][j] == '.' && visited[i][j] == 0){
				ii p = {i,j};
				bfs(p);
				cnt++;
			}
		}
	}

	cout<<cnt<<endl;
}