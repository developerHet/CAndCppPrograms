#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    int n,m;
    cin >> n;
    int aliceCard[n];
    for(int i=0;i<n;i++) {
        cin >> aliceCard[i];
    }
    cin >> m;
    int bobCard[m];
    for(int i=0;i<m;i++) {
        cin >> bobCard[i];
    }
    sort(aliceCard,aliceCard+n);
    sort(bobCard,bobCard+m);

    if(aliceCard[n-1]==bobCard[m-1]) {
        cout<<"Alice"<<endl;
        cout<<"Bob"<<endl;
    } else if(aliceCard[n-1]>bobCard[m-1]) {
        cout << "Alice" << endl;
        cout << "Alice" << endl;
    } else {
        cout << "Bob" << endl;
        cout << "Bob" << endl;
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