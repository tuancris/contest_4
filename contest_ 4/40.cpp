#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int sum = 0, num; // gan tong bang 0
        for(int i=0; i<n; i++){
            cin >> num;
            sum += num; // cong tong day so 1
        }
        cout << (n - sum) <<endl; // in ra ket qua
    }
	return 0;
}
