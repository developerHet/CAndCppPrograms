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
   
    for(int i=n-1;i>=0;) {
        for(int k=0;k<=i;k++) {
            int p = k+i;
            int q = sqrt(p);
            if(q*q==p) {
                int k1 = k;
                while(k1<=i) {
                    v[k1]=i;
                    v[i]=k1;
                    k1++;
                    i--;
                }
                i=k-1;
                break;
            }
        }
    }

    for(int i=0;i<n;i++) {
        cout << v[i] << " ";
    } cout << endl;
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