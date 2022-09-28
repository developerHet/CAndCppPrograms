#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool mark = false;
    for(int i=0;i<n;i++) {
        if(s[i]=='5' || s[i]=='0') {
            mark=true;
            break;
        }
    }
    if(mark) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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