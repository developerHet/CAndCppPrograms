#include <bits/stdc++.h>
using namespace std;
#define ll long long
 


 
void solve() {
    string s;
    cin >> s;
    set<char> uniqueChar;
    for(auto i:s) {
        uniqueChar.insert(i);
    }
    int n = s.size();
    bool ans = true;
    for(int i=0;i<n;i++) {
        if(s[i]!=s[i%uniqueChar.size()]) {
            ans=false;
            break;
        }
    }
    if(ans) {
        cout << "YES" << endl;
    } else {
        cout << "NO" <<endl;
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