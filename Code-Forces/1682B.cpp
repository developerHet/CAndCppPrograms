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
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    vi s=v;
    sort(s.begin(),s.end());
    int ans=INT_MAX;
    for(int i=0;i<n;i++) {
        if(s[i]!=v[i] && ans==INT_MAX) {
            ans=v[i];
        } else if(s[i]!=v[i]) {
            ans&=v[i];
        }
    }
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