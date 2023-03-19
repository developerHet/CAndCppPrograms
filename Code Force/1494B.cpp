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
    int n,u,r,d,l;cin>>n>>u>>r>>d>>l;
    for(int i=0;i<16;i++) {
        int mu=u,mr=r,md=d,ml=l;
        if(i&1) mu--,ml--;
        if(i&2) md--,ml--;
        if(i&4) md--,mr--;
        if(i&8) mu--,mr--;
        if(max(mu,max(mr,max(md,ml)))<=n-2 && min(mu,min(mr,min(md,ml)))>=0) {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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