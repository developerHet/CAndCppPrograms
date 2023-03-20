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
 
int n,m,sx,sy,ex,ey;
string s;

int check(int &x,int &y) {
    bool f = 0;
    if((x==-1 && sx==1) || (x==1 && sx==n))x*=-1,f=1;
    if((y==-1 && sy==1) || (y==1 && sy==m))y*=-1,f=1;
    return f;
} 

void solve() {
    cin >>n>>m>>sx>>sy>>ex>>ey>>s;
    int x=1,y=1;
    if(s[0]=='U') x=-1;
    if(s[1]=='L') y=-1;
    bool f = 0;
    int bounce=0;
    for(int i=0;i<50000;i++) {
        if(sx==ex && sy==ey) {
            f=1;break;
        }
        bounce+=check(x,y);
        sx+=x;sy+=y;
    }
    if(f) cout << bounce << endl;
    else cout << -1 << endl; 
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