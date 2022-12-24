#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << " = " << x << " , " << #y << " = " << y << endl
#define pb push_back
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))


typedef pair<ll, ll>  pii;
typedef pair<ll, ll> pl;
typedef vector<ll> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

ll MOD=1000000007;
 
 
 
void solve() {
    ll n,k;
    cin >> n >> k;
    vpii a;
    for(ll i=0;i<n;i++) {
        ll x;
        cin >> x;
        a.push_back({0,x});
    }

    for(ll i=0;i<n;i++) {
        ll x;
        cin >> x;
        a[i].F = x;
    }
    
    sort(all(a));

    ll sum = 0;
    ll cnt = 0;
    map<ll,ll> mp;
    for(ll i=0;i<n;i++) {
        if(mp.find(a[i].second)==mp.end()) {
            mp[a[i].second]=1;
            sum+=a[i].first;
            cnt++;
        }
        if(cnt==k) {
            cout << sum << endl;
            return;
        }
    }
    cout << -1 << endl;
}
 
 
 
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}