#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    int n;
    cin >> n;
    if(n>=10 && n<=99) {
        cout << n%10 << endl;
    } else {
        int mn = INT_MAX;
        while(n>0){
            mn = min(mn,n%10);
            n/=10;
        }
        cout << mn << endl;
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