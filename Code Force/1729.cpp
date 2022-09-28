#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    ll n;
    cin >> n;
    if(n%3==0) {
        cout << "4 3 2 1 ";
        for(int i=5;i<=n;i++) {
            cout << i << " ";
        }
    } else if((n-1)%3==0) {
        cout << "2 1 ";
        for(int i=3;i<=n;i++) {
            cout << i << " ";
        }
    } else if((n+1)%3==0) {
        for(int i=1;i<=n;i++) {
            cout << i << " ";
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