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
    vi a(n);
    int mx=INT_MIN;
    int mn=INT_MAX;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        mx = max(a[i],mx);
        mn = min(a[i],mn);
    }
    int m = log2(mx)+1;
    int maxVal=mx;
    int minVal=mn;
    for(int offset = 0;offset<m;offset++) {
        for(int i=0;i<n;i++) {
            if((1<<offset)&a[i]) {
                maxVal = (maxVal | (1 << (offset)));
            } else {
                minVal = (minVal & (~(1 << (offset))));
            }
        }
    }
    cout << maxVal-minVal << endl;
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