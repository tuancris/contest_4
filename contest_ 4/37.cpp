#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll solve(ll a[], ll n, ll x)  {  
    if (x >= a[n-1])  return n-1;  // neu phan tu cuoi cung nho hon x tra ve no luon
    if (x < a[0])   return -1;  // neu be hon phan tu dau tien thi ko co
    for (int i=1; i<n; i++) {
    	if (a[i] > x)   return (i-1);  // tim kiem tuyen tinh neu phan tu lon hon thi tra ve truoc no
	}
    return -1;  
}  
int main() {
	int t; cin >> t;
	while(t--) {
		ll n, x; cin >> n >> x;
		ll a[n];
		for(int i=0; i<n; i++)
		    cin >> a[i];
		ll vt = solve(a,n,x);
		if(vt==-1) cout << -1 << endl;
		else cout << vt+1 << endl;
	}
}
  
