#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    ll n,q;
    cin >> n >> q;
    ll even=0;
    ll odd=0;
    ll sum=0;
    for(ll i=0;i<n;i++) {
        ll x;
        cin >> x;
        sum+=x;
        if(x%2==0) {
            even++;
        } 
    }
    odd=n-even;
    while(q--) {
        ll t,y;
        cin >> t >> y;
        if(t==0) {
            sum+=(even*y);
            cout << sum << endl;
        } else {
            sum+=(odd*y);
            cout << sum << endl;
        }
        if(y%2==1 && t==0) {
            odd += even;
            even=0;
        } else if(y%2==1 && t==1) {
            even += odd;
            odd=0;
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