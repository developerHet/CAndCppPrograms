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
    int c[8]={0};
    for(int i=0;i<n;i++) {
        int x;
        cin >> x;
        c[x]++; 
    }
    if(c[5]!=0||c[7]!=0||c[1]!=n/3||c[6]+c[4]!=c[2]+c[3]||c[2]<c[4]||c[6]<c[3])  {
        cout << -1 << endl;
        return;
    }

    for(int i=0;i<c[4];i++) {
        cout << "1 2 4" << endl;
    }

    for(int i=0;i<c[2]-c[4];i++) {
        cout << "1 2 6" << endl;
    }

    for(int i=0;i<c[3];i++) {
        cout << "1 3 6" << endl;
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