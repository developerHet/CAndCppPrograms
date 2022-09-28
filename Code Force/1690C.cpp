#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
 
 
void solve() {
    int n;
    cin >> n;
    vi a(n);
    vi  b(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    for(int i=0;i<n;i++) {
        cin >> b[i];
    }

    vi c(n);
    c[0]=abs(a[0]-b[0]);
    for(int i=1;i<n;i++) {
        if(i==0 || a[i]>b[i-1]) {
            c[i]=abs(b[i]-a[i]);
        } else {
            c[i]=abs(b[i]-b[i-1]);
        }
    }
    for(int i=0;i<n;i++) {
        cout << c[i] << " ";
    }
    cout << endl;
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