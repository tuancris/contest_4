#include <bits/stdc++.h>
#define ll long long
#define Mod 1000000007
using namespace std;

ll pow(ll a, ll b){
	if(b == 0) return 1; // mu 0 tra ve 1
	ll z = pow(a, b/2);
	if(b%2 == 0) return z*z % Mod; // neu b chan tra ve ket qua
	return (z*z % Mod)*a % Mod; // neu b le 
}
void init() {
	ll n; cin >> n;
	ll a = n, b = 0; // n tuong duong voi a
	while(n>0) {
		b = b*10 + n%10; // chuyen a thanh b 
		n /= 10;
	}
	cout << pow(a,b) << endl;
}
int main() {
	int t; cin >> t;
	while(t--) {
		init();
	}
	return 0;
}
