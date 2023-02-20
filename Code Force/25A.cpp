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
    // int n;cin>>n;
    // int e=-1,o=-1,eb=-1;
    // for(int i=0;i<n;i++) {
    //     int x;
    //     cin >> x;
    //     if(x%2){
    //         if(e!=-1)eb=0;
    //         e=i+1;
    //     } else {
    //         if(o!=-1)eb=1;
    //         o=i+1;
    //     }
    // }
    // if(eb==1) {
    //     cout << e << endl;
    // } else {
    //     cout << o << endl;
    // }
    int n;cin>>n;
    int a[2],c[2]={0};
    for(int i=0;i<n;i++) {
        int x;
        cin >> x;
        a[x%2]=i+1;
        c[x%2]++;
    }
    if(c[0]==1) cout << a[0] << endl;
    else cout << a[1] << endl;
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