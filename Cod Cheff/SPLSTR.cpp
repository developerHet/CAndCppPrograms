#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
 
 
void solve() {
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    int count=0;
    for(int i=0;i<n;i++) {
        if(s[i]=='0') {
            count++;
        } else {
            count--;
        }
    }
    count = abs(count);
    if(count==0) cout << 0 << endl;
    else if(k>=count) cout << 1 << endl;
    else {
        if(count%k==0) {
             cout << count/k << endl;
        } else {
             cout << (count/k)+1 << endl;
        }
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