#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    int n;
    cin >> n;
    vi a(n),b(n);

    for(int i=0;i<n;i++) {
        cin >> a[i];
    }

    for(int i=0;i<n;i++) {
        cin >> b[i];
    }

    int countA=0,countB=0;

    for(int i=0;i<n;i++) {
        if(a[i]==1) countA++;
        if(b[i]==1) countB++;
    }

    int diff = 0;

    for(int i=0;i<n;i++) {
        if(a[i]!=b[i]) diff++;
    }

    if(countA==countB && diff==0) cout << 0 << endl;
    else if((countA==countB && diff) ) cout << 1 << endl;
    else if(abs(countA-countB) < diff) cout << abs(countA-countB)+1 << endl;
    else cout << abs(countA-countB) << endl;

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