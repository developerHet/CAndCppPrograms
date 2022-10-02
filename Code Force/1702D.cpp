#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    string s;
    cin >> s;
    int p;
    cin >> p;
    string sortS = s;
    sort(sortS.begin(),sortS.end(),greater<int>());
    map<char,int> mp;

    int curr=0;
    for(int i=0;i<s.length();i++) {
        curr+=(s[i]-96);
    }

    for(int i=0;i<s.length() && curr>p;i++) {
        mp[sortS[i]]++;
        curr-=(sortS[i]-96);
        //cout << s[i]-96 << " ";
    } 

    string ans;
    for(int i=0;i<s.length();i++) {
        if(mp[s[i]]==0) {
            ans+=s[i];
        } else {
            mp[s[i]]--;
        }
    }
    cout << ans << endl;

    //cout << sortS << endl;
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