#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    int n , m, r, c;
    cin >> n >> m >> r >> c;
    int ans  = 0;
    ans = max(ans,abs(1-r)+abs(1-c));
    // ans = max(ans,abs(1-r)+abs(m-c));
    // ans = max(ans,abs(n-r)+abs(1-c));
    ans = max(ans,abs(n-r)+abs(m-c));
    cout << ans << endl;
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