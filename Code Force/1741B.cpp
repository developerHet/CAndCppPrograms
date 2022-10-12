#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    ll n;
    cin >> n;
    if(n==2) {
        cout << 2 << " " << 1 << endl;
    }
    else if(n==3) {
        cout << -1 << endl;
    } else {
        cout << n-1 << " " << n << " ";
        for(ll i=1;i<=n-2;i++) {
            cout << i << " ";
        }cout << endl;
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