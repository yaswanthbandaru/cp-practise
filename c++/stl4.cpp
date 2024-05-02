/*
Links: https://www.learning.algozenith.com/user/course/AZ-201-Genesis-Batch-39/M1-W1:-Making-STL-your-'Humsafar'-222/STL-Application-Ideas-938?no=2
input:
5 0
1 -1 1 -1 0
output:
7
*/
#include<bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    int n,x;cin>>n>>x;
    int p[n];
    for(int i=0; i<n; i++){
        cin>>p[i];
        if(i>0) p[i]+=p[i-1];
    }
    int sum = 0;
    map<int,int>mp;
    mp[0]++;
    for(int i=0; i<n;i++){
        sum += mp[p[i] - x];
        mp[p[i]]++;
    }
    cout<<sum<<endl;
}