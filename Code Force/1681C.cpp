#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
 
 
void solve() {
    int n;
    cin >> n;
    vi a,b;
    for(int i=0;i<n;i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for(int i=0;i<n;i++) {
        int x;
        cin >> x;
        b.push_back(x);
    }
    vector<pi> ans;
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(a[i]>=a[j] && b[i]>=b[j]) {
                swap(a[i],a[j]);
                swap(b[i],b[j]);
                ans.push_back({i+1,j+1});
            }
        }
    }
    if(!is_sorted(a.begin(),a.end()) || !is_sorted(b.begin(),b.end())) {
        cout << -1  << endl;
    } else {
        cout << ans.size() << endl;
        for(auto i: ans) {
            cout << i.first << " " << i.second << endl;
        }
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