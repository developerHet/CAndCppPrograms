#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    ll n = a*d;
    ll m = b*c;
    if(n==m) {
        cout << 0 << endl;
    } else {
        if(n==0 || m==0) {
            cout << 1<< endl;
        } else if((n>m && n%m==0)||(m>n && m%n==0)) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }
        
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