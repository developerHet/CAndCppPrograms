#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    ll n,m;
    cin >> n >> m;
    ll N = n*(n+1)/2;
    ll x = m%N;
    int i=0;
    while (i*(i+1)/2<=x)
    {
        i++;
    }
    i--;
    //cout << x << " " << i << endl;
    cout << x - (i*(i+1)/2) << endl;
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