#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 


int fact(int n){
    if(n==0)return 1;
    int res = 1;
    for (int i = 2; i <= n; i++) {
        res = res * i;
    }
    return res;
}

 
int nCr(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));
}



void solve() {
    int n;
    cin >> n;
    for(int i=0;i<n;i++) {
        int x;
        cin >> x;
    }
    ll ans = nCr(10-n, 2);
    cout << ans*6 << endl;
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