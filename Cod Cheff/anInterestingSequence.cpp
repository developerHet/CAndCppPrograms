#include <bits/stdc++.h>
using namespace std;
#define long long ll
 
 
void solve() {
    int n;
    cin >> n;
   int ans=0;
   if(n%2==0){
       while (n!=0 && n%2==0)
       {
           n=n/2;
           ans++;
       }
       cout << ans << endl;
   }
   else {
        cout << 0 << endl;
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