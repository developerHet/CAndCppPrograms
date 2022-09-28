#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    ll n;
    cin >> n;
    vi a(n),b(n);
    for(ll i=0;i<n;i++) {
        cin >> a[i];
    }

    for(ll i=0;i<n;i++) {
        cin >> b[i];
    }

    vi c(n+1);

    for(ll i=0;i<n;i++) {
        c[a[i]] = b[i];
    }

    for(ll i=1;i<=n;i++) {
        cout << c[i] << " ";
    }
}
 
 
 
ll main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    //cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}