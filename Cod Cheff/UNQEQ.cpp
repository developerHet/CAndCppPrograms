#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    int n;
    cin >> n;
    int len = (n*(n+1)/2);
    if(len%2) cout << "NO" << endl;
    else {
        cout << "YES"<<endl;
        for(int i=1;i<=n/2;i++) {
            if(i%2) cout << i << " ";
        }
        for(int i=n/2+1;i<=n;i++) {
            if(i%2==0) cout << i << " ";
        } cout << endl;
        for(int i=1;i<=n/2;i++) {
            if(i%2==0) cout << i << " ";
        }
        for(int i=n/2+1;i<=n;i++) {
            if(i%2) cout << i << " ";
        } cout << endl;
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