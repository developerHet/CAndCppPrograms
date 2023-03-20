#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
 
 
void solve() {
    int n;
    cin >> n;
    int count = 0;
    if(n==1 || n==2) {
        cout << 3 << endl;
    } else if(!(n&(n-1))){
        cout << n+1 <<endl;
    } else {
    while(n!=0) {
        if((n&1)==1) {
            break;
        } else {
            count++;
            n=n>>1;
        }
    }
    cout << (1<<count) << endl;
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