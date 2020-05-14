#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(string a, string b){
	ll a_10 = 0;
	ll b_10 = 0;
	int k = 0;
	for(int i = a.length()-1; i >= 0; i--){
		a_10 += (a[i] - '0')*round(pow(2,k));
		k++;
	}
	k = 0;
	for(int i = b.length()-1; i >= 0; i--){
		b_10 += (b[i] - '0')*round(pow(2,k));
		k++;
	}
    cout << a_10*b_10 << endl;
}

int main(){
	string a,b;
	int t; cin >> t;
	while(t--) {
		cin >> a >> b;
		solve(a,b);
	}
	return 0;
}
