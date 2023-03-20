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
    int n,m;cin >> n >> m;
    priority_queue<int> mx;
    priority_queue<int,vector<int>,greater<int>> mn;
    for(int i=0;i<m;i++) {
        int x;cin >> x;
        mx.push(x);mn.push(x);
    }
    int maxi=0;
    int mini=0;
    for(int i=0;i<n;i++) {
        int x = mx.top();
        mx.pop();
        maxi+=x;
        if(x-1>0)mx.push(x-1);
        x = mn.top();
        mn.pop();
        mini+=x;
        if(x-1>0)mn.push(x-1);
    }
    cout << maxi << " " << mini << endl;
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