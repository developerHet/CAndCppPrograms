#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    ll n,c;
    cin >> n >> c;
    map<ll,ll> mp;
    for(ll i=0;i<n;i++) {
        ll x;
        cin >> x;
        mp[x]++;
    }
    ll ans=0;
    for(auto x:mp) {
        if(c==1) {
            ans++;
        }
        else if(x.second>=c) {
            ans+=c;
        } else {
            ans+=x.second;
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