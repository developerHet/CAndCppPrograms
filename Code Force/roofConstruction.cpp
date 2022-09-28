#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    int n;
    cin >> n;
    int k=0;
    while(pow(2,k)<=n-1) {
        k++;
    }
    k--;
    while((n-1)>=pow(2,k)) {
        cout << n-1 << " ";
        n--;
    }
    for(int i=0;i<n;i++) {
        cout << i << " ";
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