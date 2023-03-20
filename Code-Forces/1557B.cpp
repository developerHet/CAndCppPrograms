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
    int n,k;
    cin >> n >> k;
    vpii a;
    for(int i=0;i<n;i++) {
        int x;
        cin >> x; 
        a.pb({x,i});
    }
    sort(a.begin(),a.end());
    int i=0;
    int cnt = 0;
    while(i<n) {
        if(i+1<n && a[i].S+1==a[i+1].S) {
        } else {
            cnt++;
        }
        i++;
    }
    if(cnt>k) cout << "NO" << endl;
    else cout << "YES" << endl;
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