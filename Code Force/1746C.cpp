#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    int n;
    cin >> n;
    map<int,int> mp; 
    for(int i=1;i<=n;i++) {
        int x;
        cin >> x;
        mp[x]=i;
    } 

    for(int i=1;i<=n;i++) {
        if(mp[i]==n) {
            cout << 1 << " ";
            continue;
        }
        cout << mp[i]+1 << " ";
    } cout << endl;
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