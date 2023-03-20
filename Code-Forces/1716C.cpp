#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
ll MOD=998244353;
 

void helper(ll i,ll k,ll n,vector<ll> &ds) {
    if(i>n) return;
    i=i+k;
    while(i<=n) {
        ds[i]++;
        if(i+k+1<=n) {
            helper(i,k+1,n,ds);
        }
        i=i+k;
    }
}

 
void solve() {
    ll n,k;
    cin >> n >> k;
    vector<ll> ds(n+1);
    helper(0,k,n,ds);
    for(ll i=1;i<=n;i++) {
        cout << ds[i]%MOD << " ";
    } cout << endl;
}
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    //cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}