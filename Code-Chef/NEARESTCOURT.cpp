#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
 
 
void solve() {
 int x,y;
 cin >> x >> y;
 if(abs(x-y)<=2) cout << 1 << endl;
 else {
    if(abs(x-y)%2==0) {
        cout << abs(x-y)/2 << endl;
    } else {
        cout << (abs(x-y)/2)+1 << endl;
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