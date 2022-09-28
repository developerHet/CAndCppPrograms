#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    int p,q,r;
    cin >> p >> q >> r;
    ll ans = 1;
    for(int i=0;i<20;i++) {
        int x = (1<<i);
        int sum = 0;
        sum += ((x&p)!=0);
        sum += ((x&q)!=0);
        sum += ((x&r)!=0);
        //cout << sum << endl;
        if(sum==0) ans*=1;
        else if(sum==1) ans*=0;
        else if(ans==2) ans*=1;
        else ans*=4;
    }
    cout << ans/16 << endl;
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