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
    int m;cin>>m;
    map<int,int> mp;
    for(int i=0;i<m;i++) {
        int n;cin>>n;
        while (n--) {
            int x;cin>>x;
            mp[x]=i+1;
        }
    }
    vpii p;
    for(auto x:mp) {
        p.push_back({x.second,x.first});
    }
    sortall(p);
    int d=1;
    vi ans;
    for(int i=0;i<p.size();i++) {
        if(p[i].first==d) d++,ans.push_back(p[i].second);
    }
    if(d!=m+1) {
        cout <<-1 << endl;
        return;
    }
    for(int i=0;i<ans.size();i++) {
        cout << ans[i] << " ";
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