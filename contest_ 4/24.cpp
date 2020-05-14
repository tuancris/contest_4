#include<bits/stdc++.h>
#define ll long long
#define M 123456789
using namespace std;

ll solve(ll n,ll k) {
    if( k == 0) return 1; 
    ll tmp = solve(n, k/2); 
    if (k%2 == 0)  return (tmp*tmp)%M; 
    else return (tmp*tmp%M)*n%M;
}
int main() {
	int t; cin >> t;
	while(t--) {
		ll n; cin >> n;
		cout << solve(2,n-1) << endl;
	}
	return 0;
}
