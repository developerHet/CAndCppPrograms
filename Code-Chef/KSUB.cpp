#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    int n,k;
    cin >> n >> k;
    vi a(n);
    int arrGcd = 0;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        arrGcd = __gcd(arrGcd,a[i]);
    }
    
    int sum = 0;
    int oneGcd = 0;
    for(auto i:a) {
        oneGcd = __gcd(oneGcd,i);
        if(oneGcd==arrGcd) {
            sum++;
            oneGcd = 0;
        } 
    }
    if(sum>=k) cout << "YES"<< endl;
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