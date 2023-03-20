#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    int n,m,c;
    cin >> n >> m >> c;
    vi a(n);
    vi b(m);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }

    for(int i=0;i<m;i++) {
        cin >> b[i];
    }
    int step = n-m+1;
    int i = 0;
    while(i<step) {
        for(int j=0;j<m;j++) {
            a[j+i] = (a[(j+i)%n]+b[j])%c;
        }
        i++;
    }

    for(int i=0;i<n;i++) {
        cout << a[i] << " ";
    } cout << endl;
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