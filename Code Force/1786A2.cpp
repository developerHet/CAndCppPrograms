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
    int aw=1,ab=0,bw=0,bb=0;
    int i=2;
    n--;
    bool flag = true;
    while(n-(2*i+1)>=0) {
        if(flag) {
            bw+=(2*i+1)/2;
            bb+=(2*i+1)/2+1;
            flag = false;
        } else {
            aw+=(2*i+1)/2+1;
            ab+=(2*i+1)/2;
            flag = true;
        }
        n-=(2*i+1);
        i+=2;
    }
    if(n) {
        if(flag) {
           bw+=n/2;
           bb+=(n/2+(n%2));
        } else {
            aw+=(n/2+(n%2));
            ab+=n/2;
        }
    }
    cout << aw << " " << ab << " " << bw << " " << bb <<endl;
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