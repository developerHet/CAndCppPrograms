#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    string s;
    cin >> s;
    int ans=INT_MIN;
    int left=0,right=1;
    while(right<=s.length()) {
        if(s[left]==s[right]) {
            right++;
        }
        else {
            ans=max(ans,right-left);
            left=right;
            right++;
        }
    }
    cout << ans;
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