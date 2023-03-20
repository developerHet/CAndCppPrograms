#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
 
 
void solve() {
    int n;
    cin >> n;
    vi v(n);
    for(int i=0;i<n;i++) {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    multiset<int> ms;
    ms.insert(1);
    for(int i=0;i<n;i++) {
        auto it = ms.upper_bound(v[i]);
        if(it==ms.begin()) {
            ms.insert(2);
        } else {
            int inc = *ms.begin()+1;
            ms.erase(ms.begin());
            ms.insert(inc);
        }
    }
    cout << ms.size() << endl;
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