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
    int n,x;
    cin >> n>> x;
    if(n%x) {
        cout << -1 << endl;
        return;
    }
    vi pf;
    int v=n/x;
    while(v>1) {
        for(int i=2;i<=n;i++) {
            while(v%i==0) {
                pf.pb(i);
                v/=i;
            }
        }
    }

    int curr=x;
    vector<bool> check(n+1,false);
    vi next(n+1);
    
    for(auto it: pf){
        check[curr]=1;
        next[curr]=curr*it;
        curr*=it;
    }

    cout << x << " ";
    for(int i=2;i<n;i++) {
        if(check[i]) {
            cout << next[i] << " ";
        } else {
            cout << i << " ";
        }
    }
    cout << 1 << " ";
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