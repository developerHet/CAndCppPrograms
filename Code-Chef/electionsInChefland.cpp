#include <bits/stdc++.h>
using namespace std;
#define long long ll
 
 
void solve() {
    int a,b,c;
    cin >> a >> b >> c;
    if(a>50 && a>b && a>c ) {
        cout << "A" << endl;
    } 
    else if (b>50 && b>a && b>c) {
        cout << "B" << endl;
    }
    else if (c>50 && c>a && b<c) {
        cout << "C" << endl;
    }
    else {
        cout << "NOTA" << endl;
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