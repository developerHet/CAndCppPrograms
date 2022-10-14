#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    vi a(3);
    cin >> a[0] >> a[1] >> a[2];
    sort(a.begin(),a.end());
    if(a[0]+a[1]==a[2]) {
        cout << "YES"<< endl;
    } else {
        cout << "NO" << endl;
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