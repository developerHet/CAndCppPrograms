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
    vi vis(n+1,0);

    for(ll i=0;i<n;i++) {
        if(s[i]=='1') vis[i+1]=2;
    }

    ll cost = 0;
    for(ll i=1;i<=n;i++) {
        for(ll j=i;j<=n;j+=i) {
            if(vis[j]==0) {
                vis[j]=1;
                cost+=i;
            } else if(vis[j]==2) break;
        }
    }
    cout << cost << endl;
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