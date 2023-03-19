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
    int n,k;
    cin >> n >> k;
    map<int,int> mp;
    int x;
    for(int i=0;i<n;i++) cin >> x,mp[x]++;
    vi ele;
    for(auto x:mp) {
        if(x.second>=k) ele.push_back(x.first);
    }
    sortall(ele);
    if(ele.size()==0) {
        cout << -1 << endl;
        return;
    }
    int al=ele[0],ar=ele[0],l=ele[0],mx=0;
    for(int i=1;i<ele.size();i++) {
        if(ele[i]-1==ele[i-1]) {
            if(ele[i]-l>mx) {
                al=l;
                ar=ele[i];
                mx=ele[i]-l;
            }
        } else {
            l=ele[i];
        }
    }
    cout << al << " " << ar << endl;
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