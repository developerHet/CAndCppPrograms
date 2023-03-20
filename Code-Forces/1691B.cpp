#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    int n;
    cin >> n;
    vi a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }

    vector<int> p(n);
    for(int i=0;i<n;i++) {
        p[i]=i+1;
    }

    int l=0,r=0;

    bool ans = true;
    while(r<n) {
        while(r<n-1 && a[r]==a[r+1]) r++;
        if(l==r) {
            cout << -1 << endl;
            ans= false;
            break;
        } else {
            rotate(p.begin()+l,p.begin()+r,p.begin()+r+1);
        }
        l=r+1;
        r++;
        if(!ans) break;
    }

    if(ans) {
        for(auto x:p) {
            cout << x << " ";
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