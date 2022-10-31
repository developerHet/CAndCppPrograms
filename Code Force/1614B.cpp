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
 
static bool cmp(pii &a,pii &b) {
    return a.S<b.S;
}
 
void solve() {
    ll n;
    cin >> n;
    vpii a;
    for(ll i=0;i<n;i++) {
        ll x;
        cin >> x;
        a.pb({x,i+1});
    }
    sort(all(a));
    vpii ans;

    ll mid = ceil((double)(n+1)/2);
    ll cordinate = mid-1;
    ll cordinate2 = mid+1;

    ll time = 0;
    for(ll i=n-1;i>=0;i--) {
        if(i%2) {
            ans.pb({cordinate,a[i].S});
            time+=abs(mid-cordinate)*a[i].F;
            cordinate--;
        } else {
            ans.pb({cordinate2,a[i].S});
            time+=abs(mid-cordinate2)*a[i].F;
            cordinate2++;
        }
    }
    sort(all(ans),cmp);
    cout << 2*time << endl << mid << " ";
    for(auto v:ans) {
        cout << v.F << " ";
    } cout << endl;
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