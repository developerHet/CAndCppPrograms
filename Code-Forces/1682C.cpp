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
    for(int i=0;i<n;i++) cin >> a[i];
    sortall(a);
    vi b(n);
    int k=n/2;
    int j=n/2-1;
    int i=0;
    while(k<n) {
        b[k]=a[i];
        i+=2;
        k++;
    }
    i=1;
    while(j>=0) {
        b[j]=a[i];
        i+=2;
        j--;
    }
    int prev = INT_MIN;
    int cnt1=0;
    for(int i=n/2;i<n;i++) {
        if(b[i]>prev) {
            cnt1++;
            prev=b[i];
        }
    }
    int cnt2=0;
    prev=INT_MIN;
    for(int i=n/2-1;i>=0;i--) {
        if(b[i]>prev) {
            cnt2++;
            prev=b[i];
        }
    }
    cout << min(cnt1,cnt2) << endl;
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