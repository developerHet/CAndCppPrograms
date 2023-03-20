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
    vi a(n);
    int oddCount = 0;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        if(a[i]%2) oddCount++;
    }
    sort(all(a));
    
    if(oddCount%2==1) {

        for(int i=0;i<n;i++) {
            if(a[i]%4==1 || a[i]%4==2) {
                cout << 1 << endl;
                return;
            }
        }
        int ans = INT_MAX;
        for(int i=0;i<n;i++) {
            if(a[i]%4==0 || a[i]%4==3) {
                if(a[i]%4==0) {
                    int cnt = 0;
                    while(a[i]%2!=1) {
                        cnt++;
                        a[i]/=2;
                    }
                    ans = min(ans,cnt);
                    //cout << cnt << endl;
                    //return;
                } else {
                    int cnt = 0;
                    while(a[i]%2!=0) {
                        cnt++;
                        a[i]/=2;
                    }
                    ans = min(ans,cnt);
                    //cout << cnt << endl;
                    //return;
                }
            }
        }
        cout << ans << endl;
        } else {
        cout << 0 << endl;
    }
}
 
 
 
signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}