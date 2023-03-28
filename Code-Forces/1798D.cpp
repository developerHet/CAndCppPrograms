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
    int n;cin>>n;
    vi a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    sortall(a);
    int sum=a[n-1]-a[0];
    int curr = a[0];
    int l=1,r=n-1;
    vi p;
    p.push_back(a[0]);
    while(l<=r) {
        if(abs(curr+a[l])<sum) {
            p.push_back(a[l]);
            curr+=a[l];
            l++;
        } else {
            p.push_back(a[r]);
            curr+=a[r];
            r--;
        }
    }
    int tot=0;
    for(auto x:p) {
        if(tot+x>=sum) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    for(auto x:p) {
        cout << x << " ";
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