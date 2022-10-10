#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    string s;
    cin >> s;
    int n = s.length();
    int one = 0,zero = 0;
    for(int i=0;i<n;i++) {
        if(s[i]=='1') one = i+1;
    }

    for(int i=0;i<n;i++) {
        if(s[i]=='0') {
            zero=i+1;
            break;
        }
    }

    if(zero==0 && one==0) cout << n << endl;
    else if(zero==0) cout << n-one+1 << endl;
    else if(one==0) cout << zero << endl;
    else cout << abs(one-zero)+1 << endl;
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