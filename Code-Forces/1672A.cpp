#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    int n;
    cin >> n;
    int c=0;
    for(int i=0;i<n;i++) {
        int x;
        cin >> x;
        c+=(x-1);
    }
    if(c%2!=0) cout << "errorgorn" << endl;
    else cout << "maomao90" << endl;
   
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