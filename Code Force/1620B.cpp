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
    ll w,h;
    cin >> w >> h;
    ll k1,k2,k3,k4;
    cin >> k1;
    ll x1[k1];
    for(ll i=0;i<k1;i++) {
        cin >> x1[i];
    }
    cin >> k2;
    ll x2[k2];
    for(ll i=0;i<k2;i++) {
        cin >> x2[i];
    }
    cin >> k3;
    ll y1[k3];
    for(ll i=0;i<k3;i++) {
        cin >> y1[i];
    }
    cin >> k4;
    ll y2[k4];
    for(ll i=0;i<k4;i++) {
        cin >> y2[i];
    }

    ll ans = (x1[k1-1]-x1[0])*h;
    ans = max(ans,(x2[k2-1]-x2[0])*h);
    ans = max(ans,(y1[k3-1]-y1[0])*w);
    ans = max(ans,(y2[k4-1]-y2[0])*w);

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