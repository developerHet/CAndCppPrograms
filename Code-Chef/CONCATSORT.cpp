#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
 
 
 
void solve() {
    ll n;
    cin >> n;
    vector<int> v(n);
    for(ll i=0;i<n;i++) {
        cin >> v[i];
    }
    vector<int> Sort = v;
    sort(Sort.begin(),Sort.end());
    int check = 0;
    for(int i=0;i<n;i++) {
        (v[i]==Sort[check])?check++:check;
    }
    for(int i=0;i<n;i++) {
        (v[i]==Sort[check])?check++:check;
    }
    check>=n?cout<<"YES"<<endl:cout<<"NO"<<endl;
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