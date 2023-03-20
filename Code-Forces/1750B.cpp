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


typedef pair<ll, ll>  pii;
typedef pair<ll, ll> pl;
typedef vector<ll> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

ll MOD=1000000007;
 
 
 
void solve() {
    ll n;;
    cin >> n;
    string s;
    cin >> s;
    // if(n==1) {
    //     cout << n << endl;
    //     return;
    // }
    ll mxOne = 0;
    ll mxZero = 0;
    ll countZero = 0;
    ll countOne = 0;
    ll count = 0;
    for(ll i=0;i<n;i++) {
        if(s[i]=='0') {
            countZero++;
            mxOne = max(mxOne,countOne);
            countOne=0;
            count++;
        } else {
            countOne++;
            mxZero = max(mxZero,countZero);
            countZero=0;
        }
    }
    mxOne = max(mxOne,countOne);
    mxZero = max(mxZero,countZero);
    cout << max((n-count)*(count),max(mxOne*mxOne,mxZero*mxZero)) << endl;
}
 
 
 
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}