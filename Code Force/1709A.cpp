#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
 
 
void solve() {
    int k1;
    cin >> k1;
    vi door(4);
    door[0]=0;
    for(int i=1;i<4;i++) {
        cin >> door[i];
    }
    vi key;
    key.push_back(k1);
    while(!key.empty()) {
        int k = key.back();
        key.pop_back();
        if(k!=0) {
            key.push_back(door[k]);
            door[k]=0;
        }
    }
    if(door[1]==0 && door[2]==0 && door[3]==0) cout << "YES" <<endl;
    else cout << "NO" << endl;
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