#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    int n;
    cin >> n;
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++) {
        cin >> arr[i];
        if(arr[i]==0) {
            count++;
        }
    }
    cout << max(count,n-count) << endl;
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