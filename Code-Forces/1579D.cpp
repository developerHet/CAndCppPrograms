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
    priority_queue<pair<int, int> > v;
    for(int i=0;i<n;i++) {
        int x;cin>>x;
        if(x) v.push({x,i});
    }
    vpii ans;
    while(v.size()>1) {
        pii x,y;
        x.F = v.top().F;
        x.S=v.top().S;
        v.pop();
        y.F = v.top().F;
        y.S=v.top().S;
        v.pop();
        ans.push_back({x.S,y.S});
        x.F--;y.F--;
        if(x.F)v.push(x);
        if(y.F)v.push(y);
    }
    cout << ans.size() << endl;
    for(int i=0;i<ans.size();i++) {
        cout << ans[i].first+1 << " " << ans[i].second+1 << endl;
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