#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    int n;
    cin >> n;
    vi v(n);
    cout << n << endl;
    for(int i=0;i<n;i++) {
        v[i]=i+1;
        cout << v[i] << " ";
    } cout << endl;
    for(int i = 0;i<n-1;i++) {
        swap(v[n-i-1],v[n-i-2]);
        for(int i=0;i<n;i++) {
            cout << v[i] << " ";
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