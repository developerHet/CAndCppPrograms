#include <bits/stdc++.h>
using namespace std;
 
 
void solve() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    while(c>0 && a>0) {
        c=c-b;
        if(c>0) {
            a=a-d;
        }
    }
    if(a>0){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    //cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}