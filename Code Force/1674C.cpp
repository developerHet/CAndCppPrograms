#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    string s,t;
    cin >> s >> t;
    map<char,ll> mp;

    ll ans = 1;
    for(ll i=0;i<t.length();i++) {
        mp[t[i]]++;
    }

    if(mp['a']) {
        if(t=="a") cout << 1 << endl;
        else cout << -1 << endl;
    } else {
        cout << (ll)pow(2,s.length()) << endl;
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