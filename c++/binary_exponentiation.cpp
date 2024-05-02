#include<bits/stdc++.h>
using namespace std;

// 1011
// a *(a^2) * (a^8)

using lli = long long int;

int binary_exponentiation(lli a, lli b, lli mod){ // O (log b)
	lli ans = 1;
	while(b) {
		if(b%2==1){
			ans = (1LL*ans*a) % mod;
		}
		a = a*a % mod;
		b /= 2;
	}
	return ans; 
}

int main() {
	int a,b;
	cin>>a>>b;

	cout<<binary_exponentiation(a,b,1e9+7)<<endl;
}