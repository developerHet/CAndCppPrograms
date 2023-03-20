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
    int n; cin >> n;
    int cnt=0;
    vpii a; 
    for(int i=0;i<n;i++){
        int x;cin>>x;
        a.push_back({x,i+1});
        if(a[i].F==1) cnt++;
    }
    if(cnt>0 && cnt!=n) {
        cout << -1 << endl;
        return;
    }
    sortall(a);
    vpii ans;
    
    while(a[0].F!=a[n-1].F) {
        for(int i=1;i<n;i++) {
            double x=a[0].F,y=a[i].F;
            int c = ceil(y/x);
            if(a[0].F!=a[i].F && c>=2) {
                ans.push_back({a[i].S,a[0].S});
                //deb2(a[i].F,a[0].F);
                a[i].F=c;
                //deb(c);
            }
        }
        sortall(a);
    }
    cout << ans.size() << endl;
    if(ans.size()==0) {
        return;
    }
    for(int i=0;i<ans.size();i++) {
        cout << ans[i].F << " " << ans[i].S << endl;
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