#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << " = " << x << " , " << #y << " = " << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))


typedef pair<int, int>  pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

ll MOD=1000000007;
 
 
 
void solve() {
    int l,r,x,a,b;
    cin >> l >> r >> x >> a >> b;
    if(a==b) cout << 0 << endl;
    else if(abs(a-b)>=x) cout << 1 << endl;
    else {
       if(r-max(a,b)>=x  || min(a,b)-l>=x) {
            cout << 2 << endl;
       } else if((r-b>=x && a-l>=x) || (r-a>=x && b-l>=x)) {
        cout << 3 << endl;
       } else cout << -1 << endl;
    }
}
 
 
 
int main() {
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