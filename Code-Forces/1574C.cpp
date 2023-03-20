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
    vi h(n);
    int sum=0;
    for(int i=0;i<n;i++) {
        cin >> h[i];
        sum+=h[i];
    }
    sortall(h);
    int m;cin>>m;
    int x,y;
    for(int i=0;i<m;i++) {
        cin >> x >> y;
        int idx = upper_bound(all(h),x)-h.begin();
        //deb2(i,idx);
        if(idx<n && h[idx]==x) {
            sum-=x;
            if(sum<y) cout << y-sum << endl;
            else cout << 0 << endl;
        } else {
            if(idx==n) {
                
                int ans=x-h[n-1];
                if(sum<y+h[n-1]) {
                    cout << ans+y+h[n-1]-sum <<endl;
                } else {
                    cout << ans << endl;
                }
            } else {
                int  ans1=0;
                if(sum<y+h[idx]) {
                    ans1+=y+h[idx]-sum;
                }
                int ans2=x-h[idx-1];
                if(x<=h[idx-1]) ans2=0;
                if(sum<y+h[idx-1]) {
                    ans2+=y+h[idx-1]-sum;
                }
                cout << min(ans1,ans2) << endl;
            }
        }
    }
    

}
 
 
 
signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cin.tie(NULL);
    int t=1;
    //cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}