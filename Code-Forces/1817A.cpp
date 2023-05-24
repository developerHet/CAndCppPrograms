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
    int n,q;
    cin >> n >> q;
    vi a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    vi p(n,0);
    for(int i=1;i<n-1;i++) {
        int add = (a[i-1]>=a[i] && a[i]>=a[i+1]);
        p[i]=p[i-1]+add;
    }
    while(q--) {
        int l,r;
        cin >> l >> r;
        l--,r--;
        if(l==r) cout << 1 << endl;
        else cout << r-l+1-p[r-1]+p[l] << endl;;
    }
}
 
 
 
signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cin.tie(NULL);
    int t=1;
    //cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}