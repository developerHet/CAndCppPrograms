#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    ll n;
    cin >> n;
    ll card[n];
    for(ll i=0;i<n;i++) {
        cin >> card[i];
    }
    ll m;
    cin >> m;
    ll count=0;
    for(ll i=0;i<m;i++) {
        ll x;
        cin >> x;
        count += x;
    }

    cout << card[count%n] << endl;

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