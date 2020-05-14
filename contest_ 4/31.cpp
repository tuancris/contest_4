#include <bits/stdc++.h>
#define ll long long
#define Mod 1000000007
using namespace std;
struct matrix {
	ll m[11][11];
};
int N, K;
matrix operator * (matrix a, matrix b) {
	matrix res;
	for(int i=1; i<=N; i++) {
		for(int j=1; j<=N; j++) {
			res.m[i][j] = 0;
			for(int t=1; t<=N; t++) {
				res.m[i][j] = (res.m[i][j] + (a.m[i][t]*b.m[t][j] )) % Mod;
			}
		}
	}
	return res;
}
matrix pow(matrix a, ll n) {
	if(n==1) return a;
	matrix tmp = pow(a, n/2);
	if(n%2==0) return tmp*tmp;
	return tmp*tmp*a;
}
int main() {
	int t; cin >> t;
	while(t--) {
		cin >> N >> K;
		matrix a;
		for(int i=1; i<=N; i++) {
		    for(int j=1; j<=N; j++) 
			    cin >> a.m[i][j];
	    }
	    matrix res = pow(a, K);
	    for(int i=1; i<=N; i++) {
		    for(int j=1; j<=N; j++) 
			    cout << res.m[i][j] << " ";
			cout << endl;
	    }
	}
	return 0;
}
