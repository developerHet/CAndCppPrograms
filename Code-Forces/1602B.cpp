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
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    vector<vi> v(n+1,vi(n,0));

    for(int i=0;i<n;i++) {
        v[0][i]=a[i];
    }

    for(int i=1;i<=n;i++) {
        map<int,int> mp;

        for(int j=0;j<n;j++) {
            mp[a[j]]++;
        }

        for(int j=0;j<n;j++) {
            a[j]=mp[a[j]];
            v[i][j]=a[j];
        }
    }

    int q;
    cin >> q;
    while(q--) {
        int x,k;
        cin >> x >> k;
        x--;
        if(k<=n) {
            cout << v[k][x] << endl;
        } else {
            cout << v[n][x] << endl;
        }
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