#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    int n;
    cin >> n;

    vi v(n);
    for(int i=0;i<n;i++) {
       cin >> v[i];
    }

    vi ans(n,0);
    vi mp(n,-1);
    for(int i=0;i<n;i++) {
        if(mp[v[i]-1]==-1) mp[v[i]-1]=i%2;
        if(mp[v[i]-1]!=(i%2)) {
            ans[v[i]-1]++;
            mp[v[i]-1]=i%2;
        } 
    }
    for(int i=0;i<n;i++) {
        if(mp[i]!=-1) ans[i]++;
    }
    for(int i=0;i<n;i++) {
        cout << ans[i] << " ";
    }cout << endl;
}
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}