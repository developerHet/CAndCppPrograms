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
    // Method 2
    int n,w;cin >> n >> w;
    vi occ(20,0);
    for(int i=0;i<n;i++) {
        int x;
        cin >> x;
        int cnt=-1;
        while(x>0) {
            cnt++;
            x/=2;
        }
        occ[cnt]++;
    }
    int h=0;
    while(true) {
        bool flag=true;
        int rem=w;
        for(int i=19;i>=0;i--) {
            int val = occ[i];
            if(val>0) flag=false;
            int x = min(val,rem/(1<<i));
            int p = x*(1<<i);
            occ[i]-=x;
            rem-=p;
        }
        if(flag) break;
        h++;
    }
    cout << h << endl;
    // // Method 1
    // int n,w;cin>>n>>w;
    // multiset<int> ms;
    // for(int i=0;i<n;i++) {
    //     int x;cin>>x;
    //     ms.insert(x);
    // }
   
    // int h=1,rem=w;
    // while(!ms.empty()) {
    //     auto itr = ms.upper_bound(rem);
    //     if(itr==ms.begin()) {
    //         h++;
    //         rem=w;
    //     } else {
    //         itr--;
    //         int val = *itr;
    //         rem-=val;
    //         ms.erase(itr);
    //     }
    // }
    // cout << h << endl;
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