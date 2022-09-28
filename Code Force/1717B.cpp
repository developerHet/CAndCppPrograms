#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    int n,k,r,c;
    cin >> n >> k >> r >> c;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if((i+j)%k==(r+c)%k) cout << 'X';
            else cout << '.';
        }
        cout << endl;
    }
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