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
 
vi f[1000001];


 
void solve() {
    int n,m;cin>>n>>m;
    vi a(n),c(m+1,0);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    sortall(a);
    int cnt=0;
    int ans = INT_MAX;
    for(int i=0,j=0;i<n;i++) {
        while(j<n && cnt<m) {
            for(auto it: f[a[j]]) {
                if(it>m) break;
                c[it]++;
                if(c[it]==1) cnt++;
            }
            j++;
        }
        if(cnt==m) {
            ans = min(a[j-1]-a[i],ans);
        }
        for(auto it: f[a[i]]) {
            if(it>m) break;
            c[it]--;
            if(c[it]==0) cnt--;
        }
    }
    if(ans==INT_MAX) cout << -1 << endl;
    else cout << ans << endl;
}
 
 
 
signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cin.tie(NULL);
    int t=1;
    cin >> t;
    for(int i=1;i<=1000001;i++) {
        for(int j=i;j<=1000001;j+=i) {
            f[j].push_back(i);
        }
    }
    while(t--) {
       solve();
    }
    return 0;
}