#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    int n,a,b;
    cin >> n >> a >> b;
    int temp1 = min(a,b);
    int temp2 = max(a,b);
    a=temp1;
    b=temp2;
    if(a!=1 && a+1==b && b!=n) {
        cout << 2 << endl;
    } else if(b==a+1 || b==a+2) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
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