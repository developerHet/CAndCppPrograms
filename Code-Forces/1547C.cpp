#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << " = " << x << " , " << #y << " = " << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))


typedef pair<int, int>  pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

ll MOD=1000000007;
 
 
 
void solve() {
    int k,n,m;
    cin >> k >> n >> m;
    vi a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    vi b(m);
    for(int i=0;i<m;i++) cin >> b[i];
    bool flag;
    int i = 0;
    int j = 0;
    vi ans;
    while(i<n || j<m) {
        flag = true;
        while(i<n) {
            if(a[i]==0) {
                ans.pb(0);
                k++;
                flag=false;
                i++;
            } else if(a[i]<=k) {
                ans.pb(a[i]);
                flag = false;
                i++;
            } else {
                break;
            }
            
        }
        while(j<m) {
            if(b[j]==0) {
                ans.pb(0);
                k++;
                flag=false;
                j++;
            } else if(b[j]<=k) {
                ans.pb(b[j]);
                j++;
                flag = false;
            } else {
                break;
            }
        }
        if(flag) break;
    }
    if(ans.size()!=(n+m)) {
        cout << -1 << endl;
    } else {
        for(auto x:ans) {
            cout << x << " ";
        } cout << endl;
    }
}
 
 
 
int main() {
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