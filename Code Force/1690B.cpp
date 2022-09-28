#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
 
 
 
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

    ll diff = 1e18;

    ll mx = 0;
    for(ll i=0;i<n;i++) {
        if(b[i]) {
            if(diff==1e18) diff=a[i]-b[i];
            else if(diff!=a[i]-b[i]) {
                 {
                    cout << "NO" << endl;
                    return;
                }
            }
        } else {
            mx=max(a[i],mx);
        }
    }

    if(diff==1e18 || mx<=diff) {
        cout << "Yes" << endl;
    } else {
        cout << "NO" << endl;
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