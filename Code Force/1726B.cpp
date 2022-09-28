#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    int n,m;
    cin >> n >> m;
    if((n%2==0 && m%2==1) || n>m) {
        cout << "NO" << endl;
    } else  {
        cout << "YES" << endl;
        int temp = n;
        if(n%2==0 && m%2==0) {
            n-=2;
        } else {
            n--;
        }
        
        for(int i=0;i<n;i++) {
            cout << 1 << " ";
        }

        if(temp%2==0 && m%2==0) {
            cout << (m-n)/2 << " " << (m-n)/2 << endl;
        } else {
            cout << m-n << " " << endl;
        }
        
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