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
    vpii t(n);
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        t[i].F=x;
    }
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        t[i].S=x;
    }
    sortall(t);
    for(int i=n-2;i>=0;i--) {
        t[i].S+=t[i+1].S;
    }
    int ans = INT_MAX;
    int curr = t[0].S;
    ans=min(ans,curr);
    for(int i=0;i<n-1;i++) {
        curr = max(t[i].F,t[i+1].S);
        ans=min(curr,ans);
    }
    ans=min(ans,t[n-1].F);
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