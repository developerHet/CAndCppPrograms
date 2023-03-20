#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 
 
 
void solve() {
 int n;
 cin >> n;
 if(n==1) {
    cout << 2 << endl;
 }else if(n%3==0) {
    cout << n/3 << endl;
 } else {
    cout << (n/3) + 1 << endl;
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