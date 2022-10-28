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
 
static bool cmp(pii &a,pii &b) {
    if(a.F!=b.F) return a.F<b.F;
    return a.S<b.S;
} 
 
void solve() {
    int n;
    cin >> n;
    map<pii,int> mp;
    int l[n],r[n];
    for(int i=0;i<n;i++) {
        cin >> l[i] >> r[i];
       mp[{l[i],r[i]}]=1;
    }

    for(int i=0;i<n;i++) {
        cout << l[i] << " " << r[i] << " ";
        if(l[i]==r[i]) {
            cout << l[i] << endl;
            continue;
        }
        for(int d=l[i];d<=r[i];d++) { 
            if((mp[{l[i],d-1}]==1 && mp[{d+1,r[i]}]==1) || (l[i]==d && mp[{d+1,r[i]}]==1) || (r[i]==d && mp[{l[i],d-1}]==1)) {
                cout << d << endl;
            }
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