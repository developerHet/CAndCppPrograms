#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
 
 
void solve() {
    int n,m;
    cin >> n >> m;
    if(n%2!=0 && m%2!=0) {
        cout << ((n%2)*m)+((m%2)*n) - 1 << endl;
    } else if (n%2==0 & m%2==0) cout << 0 << endl;
    else {
        if(n%2!=0) {
            cout << (n%2)*m << endl;
        } else {
            cout << (m%2)*n << endl;
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