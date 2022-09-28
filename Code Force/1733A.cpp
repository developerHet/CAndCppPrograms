#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    ll n,k;
    cin >> n >> k;
    vi v(n);
    for(ll i=0;i<n;i++) {
        cin >> v[i];
    }

   vector<priority_queue<ll>> mod(k);
   for(ll i=0;i<n;i++) {
    mod[(i+1)%k].push(v[i]);
   }

   ll sum = 0;
   ll i=0;
   while (i<k)
   {
    sum+=mod[i].top();
    i++;
   }
   
   cout << sum << endl;
   
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