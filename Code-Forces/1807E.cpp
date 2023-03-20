#include <bits/stdc++.h>
using namespace std;

#define int long long


int MOD=1000000007;
 
 
 
void solve() {
    int n;cin >> n;
    vector<int> a(n+1,0);
    vector<int> pre(n+1,0);
    for(int i=1;i<=n;i++) cin >> a[i];
    for(int i=1;i<=n;i++) {
        pre[i]=pre[i-1]+a[i];
    }
    int lo=1,hi=n;
    while(lo<hi) {
        int mid = (lo+hi)/2;
        cout << "? " << mid-lo+1 << " ";
        for(int i=lo;i<=mid;i++) cout << i << " ";
        cout << endl;
        int x;cin>>x;
        if(x==pre[mid]-pre[lo-1]) {
            lo=mid+1;
        } else {
            hi=mid;
        }
    }
    cout << "! " << lo << endl;
}
 
 
 
signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cin.tie(NULL);
    cin.tie(NULL);
    int t=1;
    cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}