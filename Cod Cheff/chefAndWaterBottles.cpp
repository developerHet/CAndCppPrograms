#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    int n,x,k;
    cin >> n >> x >> k;
    if(k/x>n) {
        cout << n << endl;
    }
    else {
        cout << k/x << endl;
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