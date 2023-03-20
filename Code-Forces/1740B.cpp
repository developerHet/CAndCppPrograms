#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << " = " << x << " , " << #y << " = " << y << endl
#define pb push_back
#define mp make_pair
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
    ll n;
    cin >> n;
    vpii v;
    for(ll i=0;i<n;i++) {
        ll a,b;
        cin >> a >> b;
        v.push_back({a,b});
    }
    
    for(ll i=0;i<n;i++) {
        if(v[i].F<v[i].S) {
            ll temp = v[i].F;
            v[i].F = v[i].S;
            v[i].S = temp;
        }
    }
    sort(all(v));
    ll ans = v[0].F+(v[0].S)*2;
    for(ll i=1;i<n;i++) {
        ans+=abs(v[i-1].F-v[i].F)+(v[i].S)*2;
    }
    ans+=v[n-1].F;
    cout << ans << endl;
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