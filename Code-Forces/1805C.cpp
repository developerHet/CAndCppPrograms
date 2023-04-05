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
    int n,m;
    set<double> k;
    cin >> n >> m;
    for(int i=0;i<n;i++) {
        int x;cin>>x;
        if(!k.count(x))k.insert(x);
    }
    for(int i=0;i<m;i++) {
        int a,b,c;cin>>a>>b>>c;
        auto idx = k.upper_bound(b-2*sqrt(a*c));
        if(idx!=k.end() && (*idx<(b+(2*sqrt(a*c))))) {
            cout << "YES" << endl;
            cout << (int)*idx << endl;
        }
        else cout << "NO" << endl;
        // int idx = lower_bound(all(k),b)-k.begin();
        // if(idx>=n) idx=n-1;
        // int sum = (k[idx]-b)*(k[idx]-b) - 4*a*c;
        // if(sum<0) {
        //     cout << "YES" << endl;
        //     cout << k[idx] << endl;
        //     continue;
        // }
        // if(idx>0) {
        //     idx--;
        //     sum = (k[idx]-b)*(k[idx]-b) - 4*a*c;
        // }
        // if(sum<0) {
        //     cout << "YES" << endl;
        //     cout << k[idx] << endl;
        //     continue;
        // }
        // cout << "NO" << endl;
    }
    cout << endl;
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