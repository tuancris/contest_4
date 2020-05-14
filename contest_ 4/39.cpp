#include <bits/stdc++.h>
using namespace std;

int solve(int a[],int b[], int n) {
	for(int i=0; i<n; i++) {
		if(a[i] != b[i]) return i+1; // so sanh 2 phan tu cung 1 vi tri 
	}
	return n;
}
int main() {
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		int a[n], b[n-1];
		for(int i=0; i<n; i++) 
		    cin >> a[i];
		for(int i=0; i<n-1; i++)
		   cin >> b[i];
		cout << solve(a,b,n) << endl;
	}
	return 0;
}
