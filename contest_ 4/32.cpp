#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll tmp[100000],v[100000];

ll mergesort(ll low, ll high) {
   if(low>=high) return 0;
   int mid= (low+high)/ 2 , ax=0,by=0;
   ax=mergesort(low,mid);
   by=mergesort(mid+1,high);
   ll ret=0;
   int i=low , j=mid+1,k=low;
   while(i<=mid and j<=high) {
        if( v[i]<=v[j] ) tmp[k++]=v[i++];
        else{
            tmp[k++]=v[j++];
            ret+=abs(mid+1-i);
        }
   }
   while(i<=mid)   tmp[k++]=v[i++];
   while(j<=high)  tmp[k++]=v[j++];
   for(int i=low ; i<=high ;i++) v[i]=tmp[i];
   return 1LL*ret+ax+by;
}
int main() {
    int t; cin >> t;
    while(t--) {
    	ll n ; cin>>n;
        for(ll i= 0; i<n ; i++) {
           cin >> v[i];
           tmp[i]=0;
        }
        cout << mergesort(0,n-1) << endl;
    }
    return 0;
}

	





