#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    int n;
    cin >> n;
    vector<pair<int,int>> a;
    for(int i=0;i<n;i++) {
        int x;
        cin >> x;
        a.push_back({x,i+1});
    }
    sort(a.begin(),a.end());
    cout << a[n-1].second << endl;
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