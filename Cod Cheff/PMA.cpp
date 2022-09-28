#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    ll n;
    cin >> n;
    ll sum = 0;
    ll negMin = INT_MAX;
    ll posMin = INT_MAX;
    for(ll i=0;i<n;i++) {
        ll x;
        cin >> x;
        x = abs(x);

        if(i%2) {
            sum+=(x*-1);
            negMin = min(negMin,-1*x);
        } else {
            sum+=x;
            posMin = min(posMin,x);
        }
    }
    cout << max(sum+(-2*negMin)-(2*posMin),sum) << endl;
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