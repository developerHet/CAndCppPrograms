#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
 
 
 
void solve() {
    ll n;
    cin >> n;
    vi v(n);
    for(ll i=0;i<n;i++) {
        cin >> v[i];
    }
    int ans = 0;
    int count = 0;
    for(ll i=0;i<n;i++) {
        if(v[i]==1) {
            count++;
        } else {
            count=0;
        }
        ans+=count;
    }
    
    // for(ll i=0;i<cv.size();i++) {
    //     cout << cv[i] << " ";
    // }
   
    cout << ans << endl;
}
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long t;
    cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}