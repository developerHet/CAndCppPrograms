#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    int n;
    cin >> n;
    vi a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    string s;
    cin >> s;
    
    map<int,char> mp;
    for(int i=0;i<n;i++) {
        if(mp.find(a[i]) == mp.end()) {
            mp[a[i]]=s[i];
        } else if(mp.find(a[i])!=mp.end()) {
            if(mp[a[i]]!=s[i]) {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
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