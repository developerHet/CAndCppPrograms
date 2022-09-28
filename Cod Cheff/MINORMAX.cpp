#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
 
 
void solve() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin >> a[i]; 
    }
    int mini = INT_MAX;
    int maxi = INT_MIN;

    for(int i=0;i<n;i++) {
        mini = min(mini,a[i]);
        maxi = max(maxi,a[i]);
        if(a[i]!=mini && a[i]!=maxi) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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