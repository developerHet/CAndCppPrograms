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
    int n;cin>>n;
    vi a(n+1);
    for(int i=1;i<=n;i++) cin >> a[i];
    int ans = 1e19;
    int k;
    for(int pos=1;pos<=n;pos++) {
        int prev=0,sum=0;
        for(int i=pos-1;i>=1;i--) {
            k=prev/a[i]+1;
            sum+=k;
            prev=k*a[i];
        }
        prev=0;
        for(int i=pos+1;i<=n;i++) {
            k=prev/a[i]+1;
            sum+=k;
            prev=k*a[i];
        }
        ans=min(ans,sum);
    }
    cout << ans << endl;
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