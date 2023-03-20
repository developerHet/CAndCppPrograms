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
 
static bool cmp(vi a,vi b) {
    if(a[0]!=b[0]) return a[0]<b[0];
    return a[1]<b[1];
} 
 
void solve() {
    int n,h,m;
    cin >> n >> h >> m;
    int time = 60 * h + m;
    int ans = INT_MAX;
    for(int i = 0; i < n; ++i){
        cin >> h >> m;
        int t = 60 * h + m - time;
        if(t < 0) t += 24 * 60;
        ans = min(ans, t);
    }
    cout << ans / 60 << " " << ans % 60 << endl;
}
 
 
 
signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}