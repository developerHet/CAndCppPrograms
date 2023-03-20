#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    ll n,x,y;
    cin >> n >> x >> y;
    priority_queue<ll,vector<ll>,greater<ll>> ms;
    for(ll i=0;i<n;i++) {
        ll m;
        cin >> m;
        ms.push(m);
    }
    
   
    while(y--) {
        ll a = ms.top();
        ll m = a^x;
        if(a<m) {
            ms.pop();
            ms.push(m);
        } else {
            break;
        }
    }
    if(y%2=0) {
        ll a = ms.top();
        ll m = a^x;
        ms.pop();
        ms.push(m);
    }
    while(!ms.empty()) {
        cout << ms.top() << " ";
        ms.pop();
    }
     cout << endl;
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