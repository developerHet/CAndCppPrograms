#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    int x;
    cin >> x;
    int count=0;
    if(x%5==0) {
        while (x-10>=0)
        {
            count++;
            x-=10;
        }
        
        while (x-5>=0)
        {
            count++;
            x-=5;
        }

        cout << count << endl;
    }
    else {
        cout << -1 << endl;
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