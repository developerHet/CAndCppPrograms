#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    int n,k;
    cin >> n >> k;
    int need[n],got[n];
    for(int i=0;i<n;i++) {
        cin >> need[i];
    }
    for(int i=0;i<n;i++) {
        cin >> got[i];
    }
    for(int j=0;j<n;j++) {
        for(int i=0;i<n;i++) {
            if(need[i]<=k && got[i]!=-1) {
                k+=got[i];
                got[i]=-1;
            }
        }
    }
    cout << k << endl;
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