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
    int n,m;cin >> n >> m;
    queue<int> q;
    vi a(m);
    for(int i=0;i<m;i++) cin >> a[i];
    map<int,int> mp;
    for(int i=n;i>=1;i--) {
        mp[i]=-1;
    }
    int x = n;
    vi ans(n+1,-1);
    int cnt = 1;
    for(int i=0;i<m;i++) {
        if(x==0) break;
        if(mp.find(a[i])==mp.end()) {
            mp[a[i]]=1;
            mp[x]=cnt;
            ans[x]=cnt;
            x--;
        }
        cnt++;
    }
    for(int i=1;i<=n;i++) {
        cout << ans[i] << " ";
    } cout << endl;
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