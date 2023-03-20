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
    int n,m;
    cin >> n >> m;
    vvi a(n,(vi (m,0)));
    // for(int i=1;i<=n;i+=3) {
    //     for(int j=1;j<=m;j+=3) {
    //         a[i][j]=1;
    //     }
    // }

    // for(int i=2;i<=n;i+=3) {
    //     for(int j=2;j<=m;j+=3) {
    //         a[i][j]=1;
    //         if(j+1<=m) a[i][j+1]=1;
    //         if(i+1<=n) {
    //             a[i+1][j]=1;
    //             if(j+1<=m) a[i+1][j+1]=1;
    //         }
    //     }
    // }

    for(int i=0;i<n;i+=4) {
        for(int j=0;j<m;j+=4) {
            a[i][j]=1;
            if(i+1<n && j+1<m) a[i+1][j+1]=1;
            if(i+1<n && j+2<m) a[i+1][j+2]=1;
            if(i+2<n && j+1<m) a[i+2][j+1]=1;
            if(i+2<n && j+2<m) a[i+2][j+2]=1;
            if(i+3<n && j<m) a[i+3][j]=1;
            if(i<n && j+3<m) a[i][j+3]=1;
            if(i+3<n && j+3<m) a[i+3][j+3]=1;
        }
    }

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cout << a[i][j] << " ";
        } cout << endl;
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