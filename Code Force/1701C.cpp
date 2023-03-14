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
    int n,m;cin>>n>>m;
    map<int,int> mp;
    for(int i=0;i<m;i++) {
        int x;cin>>x;
        mp[x]++;
    }
    int ans=INT_MAX;
    int low=1,high=2*m;
    while(low<=high) {
        int mid = low+(high-low)/2;
        int left=0,help=0;
        for(int i=1;i<=n;i++) {
            if(mp[i]<mid) {
                help+=(mid-mp[i])/2;
            } else {
                left+=(mp[i]-mid);
            }
        }
        if(left<=help)  {
            ans=min(ans,mid);
            high=mid-1;
        } else low=mid+1;
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