#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(a-c==b-d) {
        cout << "Any" << endl;
    } else if(a-c<b-d) {
        cout << "First" << endl;
    } else {
        cout << "Second" << endl;
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