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
    int cnt = 0;
    int curr = l;
    while(curr<=r) {
        cnt++;
        curr*=2;
    }
    cnt--;
    int pow = (1<<cnt);
    int ans = 0;
    int low=l;
    int high=r;
    int till=-1;
    while(low<=high) {
        int mid = (low+high)/2;
        if(mid*pow<=r) {
            till=mid;
            low=mid+1;
        } else {
            high=mid-1;
        }
    }
    if(till!=-1) {
        ans=(ans+till-l+1)%MOD;
    }
    pow/=2;
    pow*=3;
    low=l;
    high=r;
    till=-1;
    while(low<=high) {
        int mid = (low+high)/2;
        if(mid*pow<=r) {
            till=mid;
            low=mid+1;
        } else {
            high=mid-1;
        }
    }
    if(till!=-1) {
        ans=(ans+((((till-l+1)%MOD)*cnt)%MOD))%MOD;
    }
    cout << cnt+1 << " " << ans << endl;
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