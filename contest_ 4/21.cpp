#include<bits/stdc++.h>
#define Mod 1000000007
#define ll long long 
using namespace std;

ll pow(ll a, ll b){
	ll z;
	if(b == 0) return 1; // mu 0 tra ve 1
	if(b%2 == 0){ // neu b chan
		z = pow(a, b/2); // tinh z=a mu b/2
		return z*z % Mod; // tra ve ket qua
	}
	return (pow(a,b-1)*a) % Mod; // neu b le 
}
int main(){
	int t; cin >> t;
	while(t--){
		ll n, k; cin >> n >> k;
	    cout << pow(n,k) << endl;
	}
	return 0;
}
