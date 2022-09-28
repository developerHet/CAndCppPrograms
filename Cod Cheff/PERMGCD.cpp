#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
 
 
void solve() {
    int n,x;
    cin >> n >> x;
    if(x<n) cout  << -1 << endl;
    else {
        cout << x-n+1 << " ";
        for(int i=1;i<=n; i++) {
            if(x-n+1!=i) {
                cout << i << " ";
            }
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