#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    string s;
    cin >> s;
    map<char,int> mp;
    for(int i=0;i<s.length();i++) mp[s[i]]=i;

    multiset<char> ms;
    int curr=0;
    for(char i='0';i<='9';i++) {
        if(mp.find(i)==mp.end()) continue;
        for(;curr<=mp[i];curr++) {
            if(s[curr]==i || s[curr]=='9') {
                ms.insert(s[curr]);
            } else {
                ms.insert(s[curr]+1);
            }
        }
    }

    for(auto x:ms) {
        cout << x;
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