#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    int a,b;
    cin >> a >> b;
    int ansI = sqrt((a*a)+(b*b));
    float ansF = sqrt((a*a)+(b*b));
    if(a==0&&b==0) {
        cout << 0 << endl;
    }
    else if(ansI==ansF) {
        cout << 1 << endl;
    }
    else {
        cout << 2 << endl;
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