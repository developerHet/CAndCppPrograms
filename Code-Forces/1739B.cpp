#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    int n;
    cin >> n;
    vi a(n);

    for(int i=0;i<n;i++) cin >> a[i];

    vi ans(n);
    ans[0]=a[0];
    for(int i=1;i<n;i++) {
        if(a[i]==0){ans[i]=a[i]+ans[i-1];continue;}
        if(ans[i-1]-a[i]>=0){cout << -1 << endl;return;}
        else ans[i]=a[i]+ans[i-1];
    }

    for(int i=0;i<n;i++) {
        cout << ans[i] <<" ";
    } cout << endl;
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