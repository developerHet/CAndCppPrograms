#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
 
 
void solve() {
    int n;
    cin >> n;
    n--;
    if(n%5==0) {
        cout << (n/5)*2 << endl;
    } else if (n%5==4) {
        cout << ((n/5)*2)+2 << endl;
    } else {
        cout << ((n/5)*2)+1 << endl;
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