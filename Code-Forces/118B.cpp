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
    int n;cin >> n;
    // Methode 1
    // for(int i=0;i<=n;i++) {
    //     for(int j=i;j<n;j++) {
    //         cout << "  ";
    //     } 
    //     for(int j=0;j<=i;j++) {
    //         if(i==0) {
    //             cout << j; 
    //             continue;
    //         } 
    //         cout << j << " ";
    //     } for(int j=i-1;j>=0;j--) {
    //         if(j==0) {
    //             cout << j; 
    //             continue;
    //         }
    //         cout << j << " ";
    //     } cout << endl;
    // }
    // int space = 0;
    // for(int i=n-1;i>=0;i--) {
    //     for(int j=0;j<=space;j++) {
    //         cout << "  ";
    //     } space++;
    //     for(int j=0;j<=i;j++) {
    //         if(i==0) {
    //             cout << j; 
    //             continue;
    //         }
    //         cout << j << " ";
    //     } for(int j=i-1;j>=0;j--) {
    //         if(j==0) {
    //             cout << j; 
    //             continue;
    //         }
    //         cout << j << " ";
    //     } cout << endl;
    // }

    //Methode 2

    for(int i=-n;i<=n;i++) {
        int space = 2*abs(i);
        for(int j=0;j<space;j++) cout << " ";
        int max = n-abs(i);
        for(int j=0;j<max;j++) cout << j << " ";
        for(int j=max;j>0;j--) cout << j << " ";
        cout << 0 << endl;
    }
}
 
 
 
signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cin.tie(NULL);
    int t=1;
 //   cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}