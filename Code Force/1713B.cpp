#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    ll n;
    cin >> n;
    vi v(n);
    for(ll i=0;i<n;i++) {
        cin >> v[i];
    }
    ll inc=0,dec=0;
    for(ll i=1;i<n;i++) {
        if(v[i]>v[i-1]) {
            if(dec==0) {
                inc++;
            } else {
                cout << "NO" << endl;
                return;
            }
        } else if(v[i]<v[i-1]){
            dec++;
        }
    }
    cout << "YES" << endl;
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