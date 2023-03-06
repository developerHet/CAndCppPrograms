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
    int n;
    cin >> n;
    int k = 2*n-2;
    vector<string> sv(k);
    for(int i=0;i<k;i++) {
        cin >> sv[i];
    }
    vi vis(k,0);
    for(int i=0;i<k;i++) {
        if(vis[i]) continue;
        vis[i]=1;
        string s=sv[i];
        reverse(all(s));
        bool flag = true;
        for(int j=0;j<k;j++) {
            if(sv[j]==s && !vis[j]) {
                flag = false;
                vis[j]=1;
                break;
            }
        }
        if(flag) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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