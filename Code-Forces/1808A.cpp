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
    int l,r;cin>>l>>r;
    int mx=INT_MIN;
    int ans=l;
    for(int i=l;i<=r;i++) {
        string s = to_string(i);
        int y=-1,x=10;
        for(int j=0;j<s.length();j++) {
            y=max(y,(int)(s[j]-'0'));
            x=min(x,(int)(s[j]-'0'));
        }
        if(y-x==9) {
            cout << i << endl;
            return;
        }
        if(y-x>mx) {
            ans=i;
            mx=y-x;
        }
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