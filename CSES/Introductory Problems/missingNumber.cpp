#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct node {
    int value = -1;
};
 
void solve() {
    int n;
    cin >> n;
    unordered_map<int,node> mp;
    for(int i=0;i<n-1;i++) {
        int x;
        cin >> x;
        mp[x].value=1;
    }

    for(int i=1;i<=n;i++) {
        if(mp[i].value==-1) {
            cout << i << endl;
            break;
        }
    }
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