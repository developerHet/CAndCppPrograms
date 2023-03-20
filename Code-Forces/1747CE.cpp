#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vi a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }

    int i = n-1;
    int ans = 0;
    while(i>=0) {
        if(s[i]=='1') {
            int mn = INT_MAX;
            while (i>=0)
            {
                if(s[i]=='1') {
                    ans+=a[i];
                    mn = min(a[i],mn);
                    i--;
                } else {
                    ans+=a[i];
                    ans-=min(a[i],mn);
                    i--;
                    break;
                }
            }
        } else {
            i--;
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