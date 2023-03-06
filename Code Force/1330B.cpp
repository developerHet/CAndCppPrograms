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
    int n;cin >> n;
    vi a(n+1);
    for(int i=1;i<=n;i++) cin >> a[i];
    set<int> st;
    vi loc1(n+2,0),loc2(n+1,0);
    for(int i=1;i<=n;i++) {
        st.insert(a[i]);
        if(st.size()==i && *(--st.end())==i) loc1[i]=1;
    }
    st.clear();
    for(int i=n;i>=1;i--) {
        st.insert(a[i]);
        if(st.size()==n-i+1 && *(--st.end())==n-i+1) loc2[i]=1;
    }
    vpii part;
    for(int i=1;i<n;i++) {
        if(loc1[i] && loc2[i+1]) {
            part.push_back({i,n-i});
        }
    }
    cout << part.size() << endl;
    for(auto x:part) {
        cout << x.first << " " << x.second << endl;
    }
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