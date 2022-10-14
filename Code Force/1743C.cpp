#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    vector<string> v(8);
    for(int j=0;j<8;j++) {
        cin >> v[j];
    }
    
    for(int i=0;i<8;i++) {
        bool flag = true;
        for(int j=0;j<8;j++) {
            if(v[i][j]=='B') {
                flag = false;
                break;
            }
        }

        if(flag) {
            cout << 'R' << endl;
            return;
        }
    }
    cout << 'B' << endl; 
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