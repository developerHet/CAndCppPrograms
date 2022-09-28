#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
 
bool isPalindrome(string s) {
    string p = s;
    p.reserve(p.begin(),p.end());
    return p==s;
}
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(isPalindrome(s)) cout << s << endl;
    else {
        int countZ = count(s.begin(),s.end(),'0');
        int countO = s.length() - countZ;
        string ans = "";
        if(countZ>countO) {
            while(countO--) {
                ans+="1";
            }
        } else {
            while(countZ--) {
                ans+="0";
            }
        }
        cout << ans << endl;
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