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
const int MAXN = 100100;

int n;
int a[MAXN];
int get(int i) {
    return max(0ll,max(a[i-1],a[i+1])-a[i]+1);
}

void solve() {
    cin>>n;
    for(int i=1;i<=n;i++) cin >> a[i];
    int tot = 0;
    for(int i=2;i<n;i+=2) {
        tot+=get(i);
    }
    if(n&1) {
        cout << tot << endl;
        return;
    }
    int ans=tot;
    for(int i=n-1;i>1;i-=2) {
        tot+=get(i);
        tot-=get(i-1);
        ans=min(ans,tot);
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