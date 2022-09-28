#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    ll n;
    cin >> n;
    cout << n << " ";
    while(n!=1) {
        if(n%2==0) {
            cout << n/2 << " ";
            n/=2;
        }
        else {
            cout << (n*3)+1  << " ";
            n=(n*3)+1;
        }
    }
}
 
 
 
int main() {
    int t=1;
    // cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}