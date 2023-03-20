#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    int n;
    cin >> n;
    cout << 1 << " " << n << " ";
    for(int i=3;i<=n-1;i+=2) {
        cout << i << " ";
    }

    for(int i=2;i<=n-1;i+=2) {
        cout << i << " ";
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