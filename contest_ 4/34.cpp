#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int m,n; cin >> m >> n;
        int a[m], b[n];
        int r[m+n-1] = {0}; // khoi tao mang luu ket qua
        for(int i=0;i<m;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                r[i+j] += a[i]*b[j]; 
            }
        }
        for(int i=0;i<m+n-1;i++)
            cout << r[i] << " ";
        cout << endl;
    }
	return 0;
}
