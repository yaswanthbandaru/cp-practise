#include<bits/stdc++.h>
using namespace std;

#define F first
#define S second

using ii = pair<int, int>;

/*
6 6
S.#...
......
####.#
E.#..#
..#..#
#....#

*/

int n,m;
vector<string> arr;

int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};

/* for knight to move from st to en is to change just dx[], dy[]
// */
// int dx[] = {2,1,-1,-2,-2,-1,1,2};
// int dy[] = {-1,-2,-2,-1,1,2,2,1};


bool inside(int x, int y){
	if(x<0 || x>=n || y<0 || y>=m || arr[x][y]=='#') return 0;
	else return 1;
}

int dist[1010][1010];
ii back[1010][1010];

void bfs(ii st) {
	for(int i=0; i<n; i++){
		for(int j=0; j<m;j++){
			dist[i][j] = 100;
		}
	}
	dist[st.F][st.S] = 0;

	queue<ii> q;
	q.push(st);
	while(!q.empty()){
		ii cur = q.front();
		q.pop();
		int curd = dist[cur.F][cur.S];
		for(int k=0; k<4; k++){
            if(!inside(cur.F+dx[k], cur.S+dy[k])) continue;

			ii neigh = {cur.F+dx[k], cur.S+dy[k]};
			if(dist[neigh.F][neigh.S]> curd + 1) { // relaxing condition
                dist[neigh.F][neigh.S] = curd + 1;
                back[neigh.F][neigh.S] = cur;
                q.push(neigh);
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
	arr.resize(n);
	ii st,en;
	for(int i=0; i<n;i++){
		cin>>arr[i];
		for(int j=0; j<m; j++){
			if(arr[i][j] == 'S') {
				st = {i,j};
			} else if(arr[i][j] == 'E'){
				en = {i,j};
			}
		}
	}


	bfs(st);
	// cout<<dist[en.F][en.S]<<endl;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<dist[i][j]<<"\t";
        }
        cout<<endl;
    }

    ii temp = en;
    vector<ii> path;
    while (temp != st) {
        /* code */
        path.push_back(temp);
        temp = back[temp.F][temp.S];
    }
    path.push_back(st);
    reverse(path.begin(), path.end());
    for(auto v:path){
        cout<<v.F<<" "<<v.S<<endl;
    }
    
}