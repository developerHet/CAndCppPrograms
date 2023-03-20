#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    int n,m;
    cin >> n >> m;
    cout << max(m,n)-min(m,n) << endl;
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