#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    string s;
    cin >> s;
    int n = s.size();
    char mn = min(s[0],s[n-1]);
    char mx = max(s[0],s[n-1]);
    vector<pair<char,int>> v;
    for(int i=1;i<n-1;i++) {
        if(s[i]>=mn && s[i]<=mx) {
            v.push_back({s[i],i+1});
        }
    }
    sort(v.begin(),v.end());
    if(s[0]>s[n-1]) {
        reverse(v.begin(),v.end());
    }
    cout << mx-mn << " " << v.size()+2 << endl;
    cout << 1 << " ";
    for(auto x: v) {
        cout << x.second << " ";
    }
    cout << n << endl;
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