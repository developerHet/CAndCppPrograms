#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vi plus;
    vi mins;
    priority_queue<ll> pq;
    for(ll i=0;i<n;i++) {
        if(s[i]=='+') {
            plus.push_back(s[i]);
        } else if(s[i]=='-') {
            mins.push_back(s[i]);
        } else {
        string x = "";
        x+=s[i];
        ll d = stoi(x);
        pq.push(d);
        }
    }

    ll k = pq.size()-plus.size()-mins.size();
    string ans = "";
    for(ll i=0;i<k;i++) {
        ans+=to_string(pq.top());
        pq.pop();
    }
    for(ll i=0;i<plus.size();i++) {
        ans+="+";
        ans+=to_string(pq.top());
        pq.pop();
    }
    for(ll i=0;i<mins.size();i++) {
        ans+="-";
        ans+=to_string(pq.top());
        pq.pop();
    }
    cout << ans << endl;
}
 
 
 
ll main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}