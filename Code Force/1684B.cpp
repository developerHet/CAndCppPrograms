#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    int a,b,c;
    cin >> a >> b >> c;
    int y=c*2+b;
    int z=c;
    int x=y+a;
    cout << x  << " " << y << " " << z << endl;
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