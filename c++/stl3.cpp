/*
(8) (2) -> ai
(5) (7) -> Bi
*/
#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> &a, pair<int,int> &b){
    // condition true for a before b
    return a.first+a.second > b.first + b.second;
}

signed main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("../input.txt","r", stdin);
    freopen("../output.txt","w",stdout);
#endif 
    int n;cin>>n;
    vector<pair<int,int>> cards(n);
    for(int i=0; i<n; i++){
        cin>>cards[i].first>>cards[i].second;
    }
    sort(cards.begin(), cards.end(), comp);
    for(auto v:cards){
        cout<<v.first<<" "<<v.second<<endl;
    }
}