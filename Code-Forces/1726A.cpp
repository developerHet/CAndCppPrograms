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
    for(int i=0;i<n;i++) {
        cin  >> a[i];
    }

    int mx = *max_element(a.begin(),a.end());
    int mn = *min_element(a.begin(),a.end());
    int ans = INT_MIN;
    for(int i=0;i<n-1;i++) {
        ans = max(a[i]-a[i+1],ans);
    }

    cout << max(max(mx-a[0],a[n-1]-mn),ans) << endl;
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