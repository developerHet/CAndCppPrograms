#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    int n,x;
    cin >> n >> x;
    int sum = 0;
    for(int i=0;i<n;i++) {
        int y;
        cin >> y;
        sum+=y;
    }
   sum = abs(sum);
   int ans = sum/x;
   if(sum%x!=0) ans++;
   cout << ans << endl;
}
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    //cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}