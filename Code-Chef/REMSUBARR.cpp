#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << " = " << x << " , " << #y << " = " << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))


typedef pair<int, int>  pii;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<vi> vvi;

int MOD=1000000007;
 
 
 
void solve() {
    int n;cin >> n;
    vi a(n);
    vpii v;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        v.push_back({a[i],i});
    }
    sortall(v);
    reverse(all(v));
    vi idx(n);
    for(int i=0;i<n;i++) idx[i]=v[i].second;
    int ans=1;
    int mn=idx[0];
    int mx=idx[0];
    for(int i=1;i<n-1;i++) {
        mn = min(mn,idx[i]);
        mx = max(mx,idx[i]);
        if(mx-mn==i) ans=max(ans,i+1);
    }
    cout << ans << endl;
}
 
 
 
signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cin.tie(NULL);
    int t=1;
    cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}