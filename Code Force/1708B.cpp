#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    int n,l,r;
    cin >> n >> l >> r;
    vi a;
    int cnt = 1;
    a.push_back(l);
    for(int i=2;i<=n;i++) {
        if(l%i==0) {
            cnt++;
            a.push_back(l);
        } else {
            int x = (((l-1)/i)+1)*i;
            if(x<=r) {a.push_back(x);cnt++;}
            else {
                cout << "NO" << endl;
                return;
            }
        }
    }

    if(cnt!=n) cout << "NO" << endl;
    else {
        cout << "YES" << endl;
        for(int i=0;i<n;i++) {
            cout << a[i] << " ";
        } cout <<endl;
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