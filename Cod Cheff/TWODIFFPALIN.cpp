#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    ll a,b;
    cin >> a >> b;
    if((a%2==0 || b%2==0) && a!=1 && b!=1) cout << "YES" << endl;
   // else if(() cout << "NO" << endl;
    else cout << "NO" << endl;
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