#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
ll MOD=1000000007;
 
 
 
void solve() {
 ll n,m;
 cin >> n >> m;
 vi v(m);
 for(ll i=0;i<m;i++) {
    cin >> v[i];
 }
 sort(v.begin(),v.end());
 vi diff;
 for(ll i=0;i<m-1;i++) {
    diff.push_back(v[i+1]-v[i]-1);
 }
 diff.push_back(v[0]+n-1-v[m-1]);
 sort(diff.begin(),diff.end(),greater<ll>());
 ll safe = 0;
 ll dayEffect = 0;
 for(ll i=0;i<diff.size();i++) {
    ll curr = diff[i];
    curr -=(2*dayEffect);
    if(curr<=0)break;
    safe+=(curr-1);
    if(curr==1) safe++;
    dayEffect+=2;
 }
 cout << n-safe << endl;
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