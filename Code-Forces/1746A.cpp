#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    int n,k;
    cin >> n >> k;

    bool flag = false;
    for(int i=0;i<n;i++) {
        int x;
        cin >> x;
        if(x==1) flag=true;
    }

    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
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