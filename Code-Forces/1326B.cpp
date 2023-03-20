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

int MOD= 998244353;
 
 
 
void solve() {
    int n,k;cin>>n>>k;
    vi a(n),idx;
    int mul=1;
    int sum=0;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        if(a[i]>=n-k+1) {
            sum+=a[i];
            idx.push_back(i);
        }
    }

    for(int i=1;i<idx.size();i++) {
        mul*=(idx[i]-idx[i-1]);
        mul%=MOD;
    }
    cout << sum << " " << mul << endl;
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