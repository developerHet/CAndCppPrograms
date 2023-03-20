#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    int count = 0;
    for(int i=0;i<4;i++) {
        int x;
        cin >> x;
        if(x>=10) {
            count++;
        }
    }
    cout << count << endl;

}
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    //cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}