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
    vi a(n);
    int sum=0;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        sum+=a[i];
    }
    for(int i=n;i>=1;i--) {
        if(sum%i==0) {
            int needSum = sum/i;
            int currSum=0;
            bool f = true;
            for(int j=0;j<n;j++) {
                currSum+=a[j];
                if(currSum>needSum) {
                    f=false;
                    break;
                } else if(currSum==needSum) {
                    currSum=0;
                }
            }
            if(f) {
                cout << n-i << endl;
                return;
            }
        }
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