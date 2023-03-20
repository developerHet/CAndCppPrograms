#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    ll n,q;
    cin >> n >> q;
    vi a(n+1,0);
    vi preSum(n+1,0);
    vi preMax(n+1,0);
    for(ll i=1;i<=n;i++) {
        cin >> a[i];
        preSum[i]=preSum[i-1]+a[i];
        preMax[i]=max(preMax[i-1],a[i]);
    }

    while(q--) {
        ll x;
        cin >> x;
        cout << preSum[upper_bound(preMax.begin()+1,preMax.end(),x)-preMax.begin()-1] << " ";
    } cout << endl;
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