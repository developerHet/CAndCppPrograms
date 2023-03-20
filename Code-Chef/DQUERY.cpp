#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    ll n;
    cin >> n;
    vi v(n);
    for(ll i=0;i<n;i++) {
        cin >> v[i];
    }
    vi sV=v;
    sort(sV.begin(),sV.end());
    ll q;
    cin >> q;
    while(q--) {
        ll p,k,ans=0;
        cin >> p >> k;
        bool c = true;
        vi temp = v;
        for(ll i=0,j=0;i<k;i++) {
            if(temp[i]%p==0) {
                while(c && j<n) {
                    if(sV[j]%p==0) {
                        temp[i]=sV[j];
                    }j++;
                    if(j==n) c =false;
                }
            }
        }
        for(ll i=0;i<k;i++) {
            ans+=temp[i];
        }
        cout << ans << endl;
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