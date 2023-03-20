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
    vi a(n),b(n);
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) cin >> b[i];

    vi pre(n);
    pre[0]=b[0];
    for(int i=1;i<n;i++) {
        pre[i]=pre[i-1]+b[i];
    }
    vi diff(n+1,0);
    vi extra(n+1,0);
    for(int i=0;i<n;i++) {
        int val = a[i];
        if(i>0) {
            val+=pre[i-1];
        }
        int idx = upper_bound(all(pre),val)-pre.begin();
        diff[i]++;
        diff[idx]--;
        int rem=0;
        if(idx>0) {
            rem = pre[idx-1];
        }
        if(i>0) {
            rem-=pre[i-1];
        }
        extra[idx]+=(a[i]-rem);
    }
    for(int i=1;i<n;i++) {
        diff[i]+=diff[i-1];
    }
    for(int i=0;i<n;i++) {
        cout << extra[i]+(diff[i]*b[i]) << " ";
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