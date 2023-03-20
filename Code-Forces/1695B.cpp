#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    ll n;
    cin >> n;
    vi a(n);
    for(ll i=0;i<n;i++) {
        cin >> a[i];
    }
    if(n%2) {
        cout << "Mike" << endl;
        return;
    }

    ll mn = INT_MAX;
    ll idx = -1;
    for(ll i=0;i<n;i++) {
        if(a[i]<mn) {
            mn = a[i];
            idx = i;
        }
    }

    if(idx%2==0) cout << "Joe" << endl;
    else cout << "Mike" << endl;
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