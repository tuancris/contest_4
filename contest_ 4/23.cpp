#include<bits/stdc++.h>
#define ll long long 
using namespace std;
ll search(ll n, ll k){
	if(k == 1) return 1;
	if(k == pow(2,n - 1)) return n;
	if(k < pow(2,n - 1)) return search(n-1,k);
	return search(n - 1,k - pow(2,n - 1));
}
int main(){
	int t; cin >> t;
	while(t--){
		ll n, k;
		cin >> n >> k;
		cout << search(n,k) << endl;
	}
	return 0;
}
