#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    int n;
    cin >> n;
    map<int,int> mp;
    for(int i=0;i<n;i++) {
        int x;
        cin >> x;
        mp[x]++;
    }
    bool ans=true;
    for(auto i:mp) {
        if(i.second>=3) {
            cout << i.first << endl;
            ans=false;
            break;
        }
    }
    if(ans) {
        cout << -1 << endl;
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