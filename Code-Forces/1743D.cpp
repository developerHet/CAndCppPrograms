#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    int n;
    cin >> n;
    //vi a(n);
    map<int,int> mp;
    for(int i=1;i<=n;i++) {
        int x;
        cin >> x;
        mp[x]=i;
    }

    int mx = -1;
    for(int i=1;i<=1000;i++) {
        if(mp[i]>0) {
            for(int j=1;j<=1000;j++) {
                if(mp[j]>0) {
                    if(__gcd(i,j)==1) {
                        mx = max(mx,mp[i]+mp[j]);
                    }
                }
            }
        }
    }

    cout << mx << endl;
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