#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
     int x,y;
    cin >> x >> y;
   // cout << (500-(x*4))+(1000-(y*2)) << endl;
    int a = (500-2*x)+(1000-4*(y+x));
    int b = (1000-4*y)+(500-2*(y+x));
    cout << max(a,b) << endl;
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