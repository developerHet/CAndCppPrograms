#include <bits/stdc++.h>
using namespace std;
 
 
void solve() {
    int n;
    cin >> n;
    string s[n];
    
    for(int i=0;i<n;i++) {
        cin >> s[i];
    }

    unordered_map<string,int> mp;
    

    for(int i=0;i<n;i++) {
        mp[s[i]]++;
    }

    cout << mp.size() << endl;
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