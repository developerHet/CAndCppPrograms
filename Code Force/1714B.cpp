#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
 
 
 
void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll mx = INT_MIN;
    for(ll i=0;i<n;i++) {
        cin >> v[i];
        mx = max(v[i],mx);
    }
    //cout << mx << endl;
    ll ans = 0;
    vector<ll> vis(mx+1,0);
    for(ll i=0;i<n;i++) {
        if(vis[v[i]]==0) {
            vis[v[i]]=i+1;
        } else {
            ans = max(vis[v[i]],ans);
            vis[v[i]] = i+1;
        }
    }
    // for(ll i=0;i<mx+2;i++) {
    //     cout << vis[i] << " ";
    // }
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