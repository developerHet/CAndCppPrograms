#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

 
 
 
void solve() {
    ll n;
    cin >> n;
    ll a[n],b[n];
    for(ll i=0;i<n;i++) cin >> a[i];
    for(ll i=0;i<n;i++) cin >> b[i];
    map<ll,ll> mp;
    for(ll i=0;i<n;i++) mp[a[i]^b[i]]++;
    ll ans=0;
    for(auto i:mp) ans+=((i.second*(i.second-1))/2);
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