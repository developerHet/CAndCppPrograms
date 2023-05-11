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
    int x,y;cin >>x >> y;
    int n=x*y;
    vi a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    if(y>x) {
        swap(y,x);
    }
    sortall(a);
    int sum = (a[n-1]-a[0])*(x-1)*y;
    int ext = max(a[n-1]-a[1],a[n-2]-a[0])*(y-1);
    cout << sum+ext << endl;
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