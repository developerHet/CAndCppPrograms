#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    ll n,x,y;
    cin >> n >> x >> y;
    if(x!=0 && y!=0) cout << -1 << endl;
    else if(x==0 && y==0) cout << -1 << endl;
    else {
        ll w = max(x,y);
        if((n-1)%w!=0) cout << -1 << endl;
        else {
            ll i = (n-1)/w;
            ll k = w;
            ll j = 1;
            bool flag = true;
            while(i--) {
                ll t=k;
                while(t--) {
                    
                    cout << j << " ";
                }
                if(flag) {
                    j = j+w+1;
                    flag=false;
                } else {
                    j = j+w;
                }
               
            }
            cout << endl;
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