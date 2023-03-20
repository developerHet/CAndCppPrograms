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
    int n,k,q;cin>>n>>k>>q;
    vi diff(200001,0),sum(200001,0);
    for(int i=0;i<n;i++) {
        int l,r;cin>>l>>r;
        diff[l]++;diff[r+1]--;
    }
    for(int i=1;i<=200001;i++) {
        diff[i]+=diff[i-1];
        if(diff[i]>=k)sum[i]++;
		sum[i]+=sum[i-1];
    }
    
    while(q--) {
        int a,b;
        cin>>a>>b;
        cout << sum[b]-sum[a] << endl;
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