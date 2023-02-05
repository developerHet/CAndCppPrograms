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
 
 
int binpow(int a,int b) {
    // recursive
    // if(b==0) return 1;
    // int res = binpow(a,b/2);
    // if(b&1) return res*res*a;
    // else return res*res;

    // iterative
    int res = 1;
    while(b>0) {
        if(b&1) res*=a;
        a*=a;
        b>>=1;
    }
    return res;
}

void solve() {

    // Methode 1

    // int a,b;
    // cin >> a >> b;
    // int ans=1;
    // int mul=a;
    // if(b&1)ans*=a;
    // for(int i=1;i<log2(b)+1;i++) {
    //     mul*=mul;
    //     if(b&(1<<i))ans*=mul;
    // }
    // cout << ans << endl;

    // Methode 2
    int a,b;
    cin >> a >> b;
    cout << binpow(a,b) << endl;
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