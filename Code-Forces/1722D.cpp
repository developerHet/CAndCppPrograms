#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    ll n;
    cin >> n;
    string  s;
    cin >> s;
    vi a(n);
    ll ans = 0;
    for(ll i=0;i<n;i++) {
        if(s[i]=='L'){
            ans+=(i);
            a[i]=(n-1-i)-(i);
        } 
        else {
            ans+=(n-i-1);
            a[i]=(i)-(n-1-i);
        } 
    }

    sort(a.begin(),a.end(),greater<ll>());
    for(ll i=0;i<n;i++) {
        if(a[i]>0) {
            ans+=a[i];
        }
        cout  << ans << " ";
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