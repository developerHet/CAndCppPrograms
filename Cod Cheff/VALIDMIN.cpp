#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
 
 
void solve() {
    vector<int> v(3);
    for(int i=0;i<3;i++) {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    if(v[0]==v[1]) cout << "YES" << endl;
    else cout << "NO" << 
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