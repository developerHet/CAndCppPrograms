#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    int n,m;
    cin >> n >> m;
    if(m%n==0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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