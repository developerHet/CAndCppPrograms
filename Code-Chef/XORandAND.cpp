#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    ll n;
    cin >> n;
    ll arr[n];
    for(ll i=0;i<n;i++) {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    ll c=0;
    ll ans=0;
    for(ll i=0;i<n-1;i++) {
        ll x = (ll)log2(arr[i]);
        ll y = (ll)log2(arr[i+1]);
        if(x==y){
            c++;
        }
        else {
            ans+=(c)*(c+1)/2;
            c=0;
        }
    }
    ans+=(c)*(c+1)/2;
    cout << ans << endl;
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