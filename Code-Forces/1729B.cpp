#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 

string alph = "abcdefghijklmnopqrstuvwxyz";

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans = "";
    for(int i=n-1;i>=0;i--) {
        string x="";
        if(s[i]!='0') {
            x+=s[i];
            int d = stoi(x);
            ans = alph[d-1]+ans;
        } else {
            x += s[--i];
            x = s[--i]+x; 
            int d = stoi(x);
            ans = alph[d-1]+ans;
        }
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