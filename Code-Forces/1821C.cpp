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
    string s;
    cin >> s;
    int n = s.length();
    int ans = INT_MAX;
    for(char i = 'a';i<='z';i++) {
        int l=0;
        int mx = 0;
        for(int j=0;j<n;j++) {
            if(s[j]==i) {
                mx = max((int)log2(l)+1,mx);
                l=0;
            } else l++;
        }
        mx = max((int)log2(l)+1,mx);
        ans = min(ans,mx);
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