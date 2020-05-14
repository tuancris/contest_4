#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll F[93];
void init(){
	F[1] = 1; F[2] = 1;
	for(int i = 3; i <= 92; i++){
		F[i] = F[i-1] + F[i-2]; // tinh so fibo thu i
	}
}
char fib(ll n, ll i){
	if(n == 1) return 'A'; // tra ve A
	if(n == 2) return 'B'; // tra ve B
	if(i <= F[n-2]) return fib(n-2,i);
	return fib(n-1,i-F[n-2]);
}
int main(){
	int t; cin >> t;
	init();
	while(t--){
		ll n, i;
		cin >> n >> i;
		cout << fib(n,i) << endl;
	}
	return 0;
}
