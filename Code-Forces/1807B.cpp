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
    vi even,odd;
    for(int i=0;i<n;i++) {
        int x;cin>>x;
        if(x%2) odd.push_back(x);
        else even.push_back(x);
    }
    vi check;
    int es=0;
    for(int i=0;i<even.size();i++) es+=even[i];
    int os=0;
    for(int i=0;i<odd.size();i++) {
        os+=odd[i];
        if(os>=es) {
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