#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    ll n,s;
    cin >> n >> s;
    cout << s/(n*n) << endl;
}
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}