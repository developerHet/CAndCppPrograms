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
        cin >> a[i];
    }
    //reverse(a.begin(),a.end());
    vi ans;
    int count = 1;
    ans.push_back(1);
    for(int i=n-2;i>=0;i--) {
        if((a[i+1]>0 && a[i]<0) || (a[i+1]<0 && a[i]>0)) {
            count++;
            ans.push_back(count);
        } else {
            count = 1;
            ans.push_back(count);
        }
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<n;i++) {
        cout << ans[i] << " ";
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