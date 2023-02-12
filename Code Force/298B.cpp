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
    int t,sx,sy,ex,ey;
    cin >> t >> sx >> sy >> ex >> ey;
    string s;
    cin>>s;
    for(int i=0;i<t;i++) {
        if(sx==ex && sy==ey) {
            cout << i << endl;
            return;
        }
        if(s[i]=='S' && sy>ey)sy--;
        else if(s[i]=='N' && sy<ey)sy++;
        else if(s[i]=='E' && sx<ex)sx++;
        else if(s[i]=='W' && sx>ex) sx--;
    }
    if(sx==ex && sy==ey) {
        cout << s.length() << endl;
    } else {
        cout << -1 << endl;
    }
}
 
 
 
signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cin.tie(NULL);
    int t=1;
 //   cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}