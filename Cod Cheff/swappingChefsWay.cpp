#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    string s2 = s;
    for(int i=0;i<n/2;i++) {
        if(s2[i]-'0'>s2[n-i-1]-'0') {
            int temp = s[i];
            s2[i]=s2[n-1-i];
            s2[n-1-i] = temp;
        }
    }
    sort(s.begin(), s.end());
    if(s2==s) {
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