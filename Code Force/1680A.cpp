#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    int l1,r1,l2,r2;
    cin >> l1 >> r1 >> l2 >> r2;
    if(l2<=r1 && r2<=r1 && l1<=r2) {
        // if(l1<=r2) {
        cout << max(l1,l2) << endl;
        // } else {
        //     cout << l1 + l2 << endl;
        // }
    } else if(l1<=r2 && r1<=r2 && l2<=r1) {
        cout << max(l1,l2) << endl;
    } else { //if(r1<l2) {
        cout << l1 + l2 << endl;
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