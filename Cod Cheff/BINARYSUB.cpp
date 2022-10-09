#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    string s;
    cin >> s;
    int n = s.length();
    vi dp(n+1,0);
    dp[n]=1;
    dp[n-1] = 1;
    for(int i=n-2;i>=0;i--) {
        if(s[i]!=s[i+1]) {
            dp[i]=dp[i+1]+dp[i+2]%998244353;
        } else {
            dp[i]=dp[i+1];
        }
    }
    cout << dp[0]%998244353 << endl;
}
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}