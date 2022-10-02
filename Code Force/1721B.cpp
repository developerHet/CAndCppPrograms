#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    int n,m,x,y,d;
    cin >> n >> m >> x >> y >> d;

    if( min(n-x,y-1) <=d && min(m-y,x-1)<=d) {
        cout << -1 << endl;
    } else {
        
        cout << (n-1)+(m-1) << endl;
    } 
    //cout << (n-1)+(m-1) << endl;

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