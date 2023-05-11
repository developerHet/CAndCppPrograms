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
    int n;
    cin >> n;
    int s1=INT_MAX,s2=INT_MAX,s12=INT_MAX;
    for(int i=0;i<n;i++) {
        int x;
        cin >> x;
        string s;
        cin >> s;
        if(s[0]=='1' && s[1]=='1') {
            s12=min(s12,x);
        } else if(s[0]=='1') {
            s1=min(s1,x);
        } else if(s[1]=='1') {
            s2=min(s2,x);
        }
    }
    if((s1==INT_MAX && s12==INT_MAX) || (s2==INT_MAX && s12==INT_MAX)) {
        cout << -1 << endl;
        return;
    }
    cout << min(s1+s2,s12) << endl;
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