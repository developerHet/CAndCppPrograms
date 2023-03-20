#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
ll MOD=1000000007;
 
ll factorial(ll n) {
    return (n==1 || n==0) ? 1: n * factorial(n - 1);
}
 
void solve() {
    ll n,m;
    cin >> n >> m;
    if((n+m-1)%2==1) {
        cout << 0 << endl;
    } else if((n==1 && m==2) || (n==2 && m==1)) {
        cout << 2 << endl;
    } else {
        int len = n+m-1;
        int onePath = len==2?2:((len-2)*(len-1));
        cout << (max(n,m)*len*onePath)%998244353 << endl;
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