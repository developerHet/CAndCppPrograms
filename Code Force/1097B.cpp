#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
 
 
void solve() {
    bool noAns = true;
    int n;
    cin >> n;
    vi v(n);
    for(int i=0;i<n;i++) {
        cin >> v[i];
    }
    for(int i=0;i<(1<<n);i++) {
        int sum = 0;
        for(int bit=0;bit<n;bit++) {
            if(i&(1<<bit)) {
                sum+=v[bit];
            } else {
                sum-=v[bit];
            }
        }
        if(sum%360==0) {
            noAns=false;
            cout << "YES" << endl;
            break;
        }
    }
    if(noAns) {
        cout << "NO" << endl;
    }
}
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    //cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}