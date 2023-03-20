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
    int n,k;cin>>n>>k;
    map<int,int>mp;
    vi a;
    for(int i=0;i<n;i++) {
        int l,r;cin>>l>>r;
        if(l<=k && k<=r) {
            for(int i=l;i<=r;i++) {
                mp[i]++;
            }
        }
    }
    
    if(mp.size()==0) {
        cout << "NO" << endl;
        return;
    }
    int mx = mp[k];
    for(auto x:mp) {
        if(x.first!=k && x.second>=mx) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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