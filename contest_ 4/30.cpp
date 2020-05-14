#include<bits/stdc++.h>
#define ll long long
#define p 1000000007
using namespace std;

void tao(ll F[2][2], ll M[2][2]) { 
  ll x =  ((F[0][0]%p*M[0][0]%p)%p + (F[0][1]%p*M[1][0]%p)%p)%p; 
  ll y =  ((F[0][0]%p*M[0][1]%p)%p + (F[0][1]%p*M[1][1]%p)%p)%p; 
  ll z =  ((F[1][0]%p*M[0][0]%p)%p + (F[1][1]%p*M[1][0]%p)%p)%p; 
  ll w =  ((F[1][0]%p*M[0][1]%p)%p + (F[1][1]%p*M[1][1]%p)%p)%p; 
  
  F[0][0] = x; 
  F[0][1] = y; 
  F[1][0] = z; 
  F[1][1] = w; 
} 
void solve(ll F[2][2], ll n) { 
  if( n == 0 || n == 1) return; 
  ll M[2][2] = {{1,1},{1,0}}; 
  solve(F, n/2); 
  tao(F, F); 
  if (n%2 != 0)  tao(F, M); 
} 
ll fib(ll n) { 
  ll F[2][2] = {{1,1},{1,0}}; 
  if (n == 0) return 0; 
  solve(F, n-1); 
  return F[0][0]; 
} 
int main() {
	int t; cin >> t;
	while(t--) {
		ll n; cin >> n;
		cout << fib(n) << endl;
	}
	return 0; 
}
