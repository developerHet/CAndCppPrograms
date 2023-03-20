#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    ll n,r;
    cin >> n >> r;
    ll a[n],b[n];
    for(ll i=0;i<n;i++) {
       cin >> a[i];
    }
    for(ll i=0;i<n;i++) {
       cin >> b[i];
    }
    vector<pair<ll,ll>> v;
    for(ll i=0;i<n;i++) {
        ll effective_cost = a[i]-b[i];
        v.push_back({effective_cost,a[i]});
    }
    sort(v.begin(),v.end());
    ll p=0;
    ll count = 0;
    while(p<n) {
        while(r-v[p].second>=0) {
            r=r-v[p].first;
            count++;
        }
        p++;
    }
    cout << count << endl;
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