#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    ll n;
    cin >> n;
    vector<vector<ll>> v(n,vi(n));
    for(ll i=0;i<n;i++) {
        for(ll j=0;j<n;j++) {
            char x;
            cin >> x;
            v[i][j]=x-'0';
        }
    }
    ll ans = 0;
    for(ll i=0;i<n;i++) {
        for(ll j=0;j<n;j++) {
            //cout << v[i][j] << " ";
            ll s = v[i][j]+v[j][n-i-1]+v[n-1-i][n-j-1]+v[n-1-j][i];
            ans+=min(s,4-s);
        }
    }
    cout << ans/4 << endl;
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