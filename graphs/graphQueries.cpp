/*
You have given an undirected graph G with N nodes and M edges. You've to answer Q queries. Each query is either of the following two types:

    1 X: Print the size of the connected components containing node X.
    2 X Y: Print ‘YES’ (without quotes) if node X and Y belong to the same connected component, else print ‘NO’ (without quotes).

Input:
6 5 5
1 2
2 3
1 3
4 4
5 6
1 2
1 4
2 3 4
1 5
2 5 6
*/

#include<bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int n,m,g;
vector<vector<int>> graph;

void solve(){
    int x,y;
    cin>>x>>y;
    for(auto i: graph[x]){
        if(i==y){
            cout<<"YES"<<endl;
        }else {
            cout<<"NO"<<endl;
        }
    }
}

void print(){
    int x; cin>>x;
    int cnt =0;
    for(auto i: graph[x]){
        cnt++;
    }
    cout<<cnt<<endl;
}

signed main() {
#ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
#endif 
    cin>>n>>m>>g;
    graph.resize(n+1);
    for(int i=0; i<m; i++){
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for(int j=0;j<g;j++){
        int query;cin>>query;

        // switch (query)
        // {
        // case 1:
        //     /* code */
        //     // int x;cin>>x;
        //     print();
        //     break;
        
        // default:
        //     solve();
        //     break;
        // }

        if(query==1){
            print();
        }else {
            solve();
        }
    }
}