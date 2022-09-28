#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    ll n,r;
    cin >> n  >> r;
    vi price(n),cashBack(n);
    for(ll i=0;i<n;i++) {
        cin >> price[i];
    }
    for(ll i=0;i<n;i++) {
        cin >> cashBack[i];
    }
    vector<pair<int,int>> netPrice;
    for(ll i=0;i<n;i++) {
        netPrice.push_back({price[i]-cashBack[i],price[i]});
    }
    sort(netPrice.begin(),netPrice.end());
    ll count = 0;
    for(ll i=0;i<n;i++){
        while(r>=netPrice[i].second) {
            int times = r/netPrice[i].second;
            count+=times; 
            r=r-times*netPrice[i].first;
        }
    }
    cout << count << endl;
    // for(ll i=0;i<n;i++) {
    //     cout << netPrice[i] << " ";
    // }
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