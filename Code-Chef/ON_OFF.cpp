#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
 
 
void solve() {
    int n;
    cin >> n;
    string s1,s2;
    cin >> s1 >> s2;
    int count = 0;
    for(int i=0;i<n;i++) {
        if(s1[i]!=s2[i]) {
            count++;
        }
    }
    if(count%2==0) cout << 1 << endl;
    else cout << 0 << endl;
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