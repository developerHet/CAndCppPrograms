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
    int n,m;cin >> n>>m;
    vi a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    int l=0,r=0;
    set<int> st;
    for(int i=0;i<n;i++) {
        if(a[i]==-1)l++;
        else if(a[i]==-2)r++;
        else st.insert(a[i]);
    }
    int sz=st.size();
    int ans = min(m,max(l+sz,r+sz));
    int left = 0;
    for(auto &x:st) {
        ans = max(ans,1+min(x-1,l+left)+min(m-x,r+(sz-left-1)));
        left++;
    }
    cout << ans << endl;
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