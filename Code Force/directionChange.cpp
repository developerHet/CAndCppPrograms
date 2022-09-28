#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    int n,m;
    cin >> n >> m;
    if(n==1 && m==1) {
        cout << 0 << endl;
    }
    else if((n==1 && m==2) || (n==2 && m==1)) {
        cout << 1 << endl;
    }
    else if (n==1 || m==1) {
        cout << -1 << endl;
    }
    else  {
        int mx = max(n,m);
        int mn = min(n,m);
        if((mx-mn)%2==0) {
            cout  << mx*2-2 << endl;
        } else {
            cout  << mx*2-3 << endl;
        }
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