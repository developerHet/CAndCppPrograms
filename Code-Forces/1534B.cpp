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
    vi a(n+2);
    a[0]=0;
    a[n+1]=0;
    for(ll i=1;i<=n;i++) {
        cin >> a[i];
    }

    ll sum = 0;
    sum+=a[n];
    for(ll i=1;i<=n;i++) {
        sum+=abs(a[i]-a[i-1]);
    }

    for(ll i=1;i<=n;i++) {
        if(a[i]>a[i-1] && a[i]>a[i+1]) {
            sum-=(a[i]-max(a[i-1],a[i+1]));
            a[i]=max(a[i-1],a[i+1]);
        }
    }
    cout << sum << endl;
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