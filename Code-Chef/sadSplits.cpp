#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    int n;
    cin >> n;
    int lastDigit = (n%10)%2;
    n/=10;
    bool mark = true;
    while(n>0){
        if((n%10)%2==lastDigit) {
            cout << "YES" << endl;
            mark=false;
            break;
        }
        n/=10;
    }
    if(mark) {
        cout << "NO" << endl;
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