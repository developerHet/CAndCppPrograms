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
    int n; cin >> n;
    vi a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    sortall(a);
    int q;cin>>q;
    while(q--) {
        int x;cin>>x;
        int lo=0,hi=n-1;
        while(hi-lo>1) {
            int mid = (lo+hi)/2;
            if(a[mid]<=x) {
                lo=mid;
            } else {
                hi=mid;
            }
        }
        if(a[hi]<=x) {
            cout << hi+1 << endl;
        } else if(a[lo]<=x) {
            cout << lo+1 << endl;
        } else {
            cout << 0 << endl;
        }
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