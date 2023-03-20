#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    int n,x;
    cin >> n >> x;
    cout << 2*n+1-x << endl;
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