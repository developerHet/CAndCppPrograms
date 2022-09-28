#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    ll x,y;
    cin >> x >> y;
    if((x+y)%2==0) {
        cout << "Janmansh" << endl;
    }
    else {
        cout << "Jay" << endl;
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