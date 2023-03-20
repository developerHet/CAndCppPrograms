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
    int pos=0;
    for(int i=0;i<n;i++) {
        int x;
        cin >> x;
        if(x>0) pos++;
    }
    int x=pos;
    for(int i=1;i<=x;i++) {
        cout << i << " ";
    }
    for(int i=1;i<=n-x;i++) {
        cout << pos-i << " ";
    } cout << endl;
    for(int i=1;i<=n-x;i++) {
        cout << "1 0 ";
    }
    for(int i=1;i<=pos-(n-x);i++) {
        cout << i << " ";
    }cout << endl;
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