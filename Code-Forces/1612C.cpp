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
    int t, k, x, ans, l, c;
    long double x1, ans1;
    cin>>k>>x;
    c = k*k;
    if(c<=x) {
        cout << 2*k-1 << endl;
        return;
    } 
    c=(k*(k+1))/2;
    if(c<=x) {
        x=x-c;
        x=((k-1)*k)/2-x;
        ans1=floor((sqrt(1+8*x)-1)/2);
        ans=2*k-1-ans1;
        cout << ans << endl;
        return;
    }
     ans1 = ceil((sqrt(1+8*x)-1)/2);
     ans=ans1;
    cout << ans << endl;
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