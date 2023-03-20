#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
 
 
void solve() {
    int n,m;
    cin >> n >> m;
    int ans = INT_MIN;
    int A=0,B=0;
    for(int i=n;i<=m;i++) {
        int a = i;
        int b = m-(m%i);
       if(abs(a-b)>=ans) {
        A=a;
        B=b;
        ans=abs(a-b);
       }
    }
    cout << A << " " << B << endl;
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