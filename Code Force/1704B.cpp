#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    ll n,x;
    cin >> n >> x;
    vector<pair<ll,ll>> a;
    for(ll i=0;i<n;i++) {
        ll k;
        cin >> k;
        ll f = abs(x-k);
        ll s = abs(x+k);
        if(f>s) {
            a.push_back({s,f});
        } else a.push_back({f,s});
    }

    ll f = a[0].first;
    ll s = a[0].second;
    ll count  = 0;
    for(ll i=0;i<n;i++) {
         f = max(a[i].first,f);
         s = min(a[i].second,s);

        if(f>s) {
            count++;
            f=a[i].first;
            s=a[i].second;
        } 
    }
    cout << count << endl;
    // for(ll i=0;i<n;i++) {
    //     cout << a[i].first << "->" << a[i].second << endl;
    // }
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