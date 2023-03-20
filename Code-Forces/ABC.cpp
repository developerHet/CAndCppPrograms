#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(s.length()==1) {
        cout << "YES" << endl;
    }
    else if(s.length()==2 && s[0]!=s[1]) {
        cout << "YES" << endl;
    }
    else {
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