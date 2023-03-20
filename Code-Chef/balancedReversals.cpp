#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int zeroCount = 0;
    int oneCount = 0;
    for(int i=0;i<s.length();i++) {
        if(s[i]=='0') {
            zeroCount++;
        }
        else {
            oneCount++;
        }
    }
    while(zeroCount--) {
        cout << '0';
    }
    while(oneCount--) {
        cout << '1';
    }
    cout << endl;
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