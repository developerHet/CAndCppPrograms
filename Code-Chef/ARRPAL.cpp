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

    ll i = 0;
    ll j = n-1;

    ll ans = INT_MIN;
    ll prev = INT_MAX;
   // bool flag = false;
   if(n==1) {
    cout << 0 << endl;
    return;
   }
    while(i<j) {
        if(a[i]>a[j]) {
            cout << -1 << endl;
            return;
        } 
        else if(prev<a[j]-a[i]) {
            cout << -1 << endl;
            return;
        }
        prev = a[j]-a[i];
        ans = max(ans,a[j]-a[i]);
        i++;
        j--;
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