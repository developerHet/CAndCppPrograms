#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    int a,b,c;
    cin >> a >> b >> c;
    if(b<c) {
        if(a==2*c-b) {
            cout << 3 << endl;
        } else if(a<2*c-b) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }
        
    } else {
        if(a==b) {
            cout << 3 << endl;
        } else if(a<b) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
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