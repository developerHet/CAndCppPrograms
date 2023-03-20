#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll ans = 0;
    for(ll i=1;i<n;i++) {
        if(s[i]==s[i-1]) ans++;
        else ans+=(i+1);
    }
    cout << ++ans << endl;
}
 
 
 
ll main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}