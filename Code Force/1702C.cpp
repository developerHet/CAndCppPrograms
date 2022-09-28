#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    ll n,k;
    cin >> n >> k;
    unordered_map<ll,ll> left,right;
    for(ll i=0;i<n;i++) {
        ll x;
        cin >> x;
        if(!left[x]) left[x]=i+1;
        right[x]=i+1;
    }

    while(k--) {
        ll l,r;
        cin >> l >> r;
        if(left[l] && right[r] && left[l]<right[r]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
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