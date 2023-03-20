#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
 
 
 
void solve() {
    ll n,m;
    cin >> n >> m;
    vector<ll> v(n);
    for(ll i=0;i<n;i++) {
        cin >> v[i];
    }

    vector<vector<ll>> p;
    for(ll i=0;i<m;i++) {
        ll a,b;
        cin >> a >> b;
        p.push_back({a,b});
    }

    vector<ll> cost(n,0);
    for(ll i=1;i<n;i++) {
        if(v[i]<v[i-1]) {
            cost[i]=v[i-1]-v[i];
        }
    }
    vector<ll> rCost(n,0);
    for(ll i=n-2;i>=0;i--) {
        if(v[i]<v[i+1]) {
            rCost[i]=v[i+1]-v[i];
        }
    }

    for(ll i=1;i<n;i++) {
        cost[i]+=cost[i-1];
    }

    for(ll i=n-2;i>=0;i--) {
        rCost[i]+=rCost[i+1];
    }
    
    // for(ll i=0;i<n;i++) {
    //     cout << cost[i] << " ";
    // }cout << endl;

    // for(ll i=n-1;i>=0;i--) {
    //     cout << rCost[i] << " ";
    // }
    
    for(auto i:p) {
        if(i[0]<i[1]) {
            cout << (cost[i[1]-1]-cost[i[0]-1]) << endl;
        } else {
            cout << (rCost[i[1]-1]-rCost[i[0]-1]) << endl;
        }
    }
    
}
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
   // cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}