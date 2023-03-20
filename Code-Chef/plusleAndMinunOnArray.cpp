#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    ll n;
    cin >> n;
    ll arr[n];
    ll mainSum=0;
    ll maxOdd = INT_MIN;
    ll minEven = INT_MAX;

    for(ll i=0;i<n;i++) {
        ll x;
        cin >> x;
        arr[i] = abs(x);
        if(i%2==0) {
            mainSum+=arr[i];
            minEven = min(minEven,arr[i]);
        }
        else {
            mainSum-=arr[i];
            maxOdd = max(maxOdd,arr[i]);
        }
    }
    
   cout << max(mainSum,mainSum+(maxOdd*2)-(minEven*2)) << endl;
}
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}