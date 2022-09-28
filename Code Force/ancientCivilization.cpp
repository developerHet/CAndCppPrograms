#include <bits/stdc++.h>
using namespace std;
#define long long ll
 
 
void solve() {
    int n,l;
    cin >> n >> l;
    int arr[n];
    int ans=0;
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    for(int b=1;b<=32;b++) {
        int countOne=0;
        int countZero=0;
        for(int i=0;i<n;i++) {
            if(arr[i]&(1<<b)) {
                countOne++;
            }
            else {
                countZero++;
            }
        }
        if(countZero<countOne) {
            ans = ans | (1<<b);
        }
        else {
            ans = ans | (0<<b);
        }
    }
    cout << ans << endl;
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