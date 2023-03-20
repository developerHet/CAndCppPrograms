#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    ll n,k,b,s;
    cin >> n >> k >> b >> s;
    //cout << x << " " << rem << endl;
    if((s<k*b || s>(k*b)+(n*(k-1)))) {
        cout << -1 << endl;
        return;
    } else {
        s=s-(k*b);
    for(long long i=1;i<n;i++) {
        cout<<min(s,k-1)<<" ";
        s=s-min(s,k-1);
    }
        cout<<s+b*k<<endl;
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