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

bool isPrime(int n) {
    for(int i=2;i<=sqrt(n);i++) {
        if(n%i==0) return false;
    }
    return true;
}

 
 
void solve() {
    int n,m;
    cin >> n >> m;
    n++;
    while(true) {
        if(isPrime(n)) {
            if(n==m) cout << "YES" << endl;
            else cout << "NO" << endl;
            return;
        }
        n++;
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