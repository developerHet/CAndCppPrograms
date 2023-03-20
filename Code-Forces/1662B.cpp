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
    vpii a;
    for(int i=0;i<n;i++) {
        int x;
        cin >> x;
        a.push_back({x,i});
    }
    sortall(a);
    int x = a[0].F;
    vi ans(n);
    for(int i=1;i<n;i++) {
        if(a[i].F%x!=0) {
            int add = x-(a[i].F%x);
            ans[a[i].S]=add;
            a[i].F=a[i].F+add;
        }
        x=a[i].F;
    }
    cout << n << endl;
    for(int i=0;i<n;i++) {
        cout << i+1 << " " << ans[i] << endl;
    }
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