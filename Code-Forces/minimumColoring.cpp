#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    int n,m,x1,y1,x2,y2;
    cin >> n >> m >> x1 >> y1 >> x2 >> y2;
    if((x1+y1)%2==(x2+y2)%2) {
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=m;j++) {
                if(x2==i && y2==j) {
                    cout << 2 << " ";
                }
                else if((x1+y1)%2==(i+j)%2) {
                    cout << 1 << " ";
                }
                else {
                    cout << 3 << " ";
                }
            }
            cout << endl;
        }
    }
    else {
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if((x1+y1)%2==(i+j)%2) {
                    cout << 1 << " ";
                }
                else {
                    cout << 2 << " ";
                }
            }
            cout << endl;
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