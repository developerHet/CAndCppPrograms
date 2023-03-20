#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    int x,y;
    cin >> x >> y;
    
    //int a,b,c;
    int b = y;
    int n = (x*3)-y;
    int a = b;
    int c = n-a;
    // if(c<b) {
    //     a = 0;
    //     c = n;
    // }
    if(a>c) {
        int t = c;
        c = a;
        a = t;
    }
    //cout << n << endl;
    cout << a << " " << b << " " << c << endl;
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