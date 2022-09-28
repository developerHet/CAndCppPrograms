#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    string s;
    cin >> s;
    char c;
    cin >> c;
    bool mark=false;
    for(int i=0;i<s.length();i++) {
        if(s[i]==c && i%2==0) {
            mark=true;
            break;
        }
    }
    if(mark) {
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