#include<bits/stdc++.h>
using namespace std; 
// dung thuat toan kadane
int max(int a[], int n) { 
   int max_0 = 0, max_1 = 0; 
   for (int i = 0; i < n; i++) { 
       max_1 = max_1 + a[i]; // tinh gia tri tai tung vi tri phan doan
       if (max_1 < 0)  max_1 = 0; // neu be hon 0 thi coi la bang 0
       else if (max_0 < max_1) max_0 = max_1; //tra ve max can tim
   } 
   return max_0; 
} 
int main() { 
    int t; cin >> t;
    while(t--) {
    	int n; cin >> n; int a[n];
    	for(int i=0; i<n; i++)
    	    cin >> a[i];
		cout << max(a, n) << endl;
	}
    return 0; 
} 
