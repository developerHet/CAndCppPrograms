#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
 
 
 
void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll total = 0;
    for(ll i=0;i<n;i++) {
        cin >> v[i];
        total+=v[i];
    }
    sort(v.begin(),v.end());
    ll ans = 0;
    for(ll i=0;i<n;i++){
        if(v[i]*(i+1)<=total) {
            ans = n-i-1;
        }
    }
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