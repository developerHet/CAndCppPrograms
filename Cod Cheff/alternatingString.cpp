#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int countZero=0;
    int countOne=0;
    for(int i=0;i<n;i++) {
        if(s[i]=='0') {
            countZero++;
        }
        else {
            countOne++;
        }
    }
    if(countOne==countZero) {
        cout << n << endl;
    }
    else {
        cout << min(countZero,countOne)*2+1 << endl;
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