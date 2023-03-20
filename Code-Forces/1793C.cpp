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
    int n;
    cin >> n;
    vi a(n),id(n),rid(n);
    for(int i=0;i<n;i++) cin >> a[i];
    int l=0;
    int r=n-1;
    int mn=1;
    int mx=n;

    while(l<r) {
        bool flag = true;
        if(a[l]==mn || a[l]==mx) {
            if(a[l]==mn) {
                mn++;
            } else if(a[l]==mx) {
                mx--;
            }
            l++;
            flag=false;
        } else if(a[r]==mn || a[r]==mx) {
            if(a[r]==mn) {
                mn++;
            } else if(a[r]==mx) {
                mx--;
            }
            r--;
            flag=false;
        }
        if(flag) {
            cout << l+1 << " " << r+1 << endl;
            return;
        }
    }
    cout << -1 << endl;
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