#include <bits/stdc++.h>
using namespace std;
 
 
void solve() {
    int n;
    cin >> n;
    if(n==2) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
        
        if(n%2==0) {
            cout << n/2 << " ";
            for(int i=1;i<n/2;i++) {
                cout << i << " ";
            }
        }
        else {
            for(int i=1;i<=n/2;i++) {
                cout << i << " ";
            }
        }
        for(int i=n;i>n/2;i--) {
                cout << i << " ";
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