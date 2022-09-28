#include <bits/stdc++.h>
using namespace std;




// Using Tabulation

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> dp(n,1);
    int ans=0;
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<i;j++) {
            if(a[i]>a[j]) {
                dp[i]=max(dp[i],1+dp[j]);
            }
        }
        ans=max(ans,dp[i]);
    }
    cout << ans;
    return 0;
}
