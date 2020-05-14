#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int m, n, k; cin >> m >> n >> k;
        int a[m], b[n], c[m+n];
        int l=0;
        for(int i=0;i<m;i++) {
            cin >> a[i];
            c[l++] = a[i];
        }
        for(int j=0;j<n;j++) {
            cin >> b[j];
            c[l++] = b[j];
        }
        sort(c, c+l);
        cout << c[k-1] << endl;
    }
    return 0;
}
