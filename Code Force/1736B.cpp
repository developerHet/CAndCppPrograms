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

    vi b(n+1);
    b[0] = a[0];
    b[1] = a[0];

    for(int i=1;i<n;i++) {
        b[i+1]=a[i];
        int g = __gcd(a[i],b[i]);
        g = a[i]/g;
        b[i]*=g;
    }

    

   
    
    for(int i=0;i<n;i++) {
        int g = __gcd(b[i],b[i+1]);
        if(g!=a[i]) {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
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