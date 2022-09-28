#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    int i=0;
    while(i<n) {
        if((i+1)<n && s[i]==s[i+1]) {
            count++;
            i+=2;
        }
        else {
            count++;
            i++;
        }
    }

    cout << count << endl;
    
    
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