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
    vi a(n);
    for(ll i=0;i<n;i++) {
        cin >> a[i];
    }

    vi pre0(n),pre1(n);

    if(a[0]==1) {
        pre0[0]=0;
        pre1[0]=1;
    } else {
        pre0[0]=1;
        pre1[0]=0;
    }

    for(ll i=1;i<n;i++) {
        if(a[i]==0) {
            pre0[i]=pre0[i-1]+1;
            pre1[i]=pre1[i-1];
        } else {
            pre0[i]=pre0[i-1];
            pre1[i]=pre1[i-1]+1;
        }
    }

    ll ans = 0;

    for(ll i=0;i<n;i++) {
        if(a[i]==0) {
            ans+=pre1[i];
        }
    }

    ll ch = 0;
    for(ll i=0;i<n;i++) {
        if(a[i]==0) {
            ch = max(ch,-pre1[i]+(pre0[n-1]-pre0[i]));
        } else {
            ch = max(ch,pre1[i]-1-(pre0[n-1]-pre0[i]));
        }
    }

    cout << ans+ch << endl;
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