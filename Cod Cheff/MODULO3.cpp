#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
 
 
void solve() {
    int a,b;
    cin >> a >> b;
    if(a%3==0 || b%3==0) {
        cout << 0 << endl;
    } else {
        if(a%3!=b%3) {
            cout << 2 << endl;
        } else if(a%3==b%3) {
            cout << 1 << endl;
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