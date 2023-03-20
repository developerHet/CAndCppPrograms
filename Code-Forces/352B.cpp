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
    int n;cin >> n;
    vvi seq(1e5+9);
    for(int i=0;i<n;i++) {
        int x;cin>>x;
        seq[x].push_back(i);
    }
    bool falg;
    vpii ans;
    for(int i=0;i<=1e5;i++) {
        if(seq[i].size()==0) continue;
        else if(seq[i].size()==1) ans.push_back({i,0});
        else if(seq[i].size()==2) ans.push_back({i,seq[i][1]-seq[i][0]});
        else {
            bool flag = true;
            for(int j=2;j<seq[i].size()&&flag;j++) {
                if(seq[i][j]-seq[i][j-1]!=seq[i][j-1]-seq[i][j-2]) flag=false;
            }
            if(flag)ans.push_back({i,seq[i][1]-seq[i][0]});
        }
    }
   cout << ans.size() << endl;
   for(auto x:ans) {
    cout << x.first << " " << x.second << endl;
   }
}
 
 
 
signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cin.tie(NULL);
    int t=1;
    //cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}