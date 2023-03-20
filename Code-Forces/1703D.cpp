#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    int n;
    cin >> n;
    vector<string> s(n);
    unordered_map<string,int> mp;
    for(int i=0;i<n;i++) {
        cin >> s[i];
        mp[s[i]]++;
    }
    string ans = "";
    for(int i=0;i<n;i++) {
        int m = s[i].size(); bool flag= false;
        for(int j=1;j<m;j++) {
            string first = s[i].substr(0,j);
            string second = s[i].substr(j,m-1);
            if(mp.find(first)!=mp.end()) {
                if(mp.find(second)!=mp.end()) {
                    flag = true;
                    break;
                }
            }
        }
        if(flag) ans+="1";
        else ans+="0";
    }
     cout << ans << endl;
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