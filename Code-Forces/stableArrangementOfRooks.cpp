#include <bits/stdc++.h>
using namespace std;
 
 
void solve() {
    int n,k;
    cin >> n >> k;
    char arr[n][n];
    for(int i=0;i<n;i++) {
                for(int j=0;j<n;j++) {
                    arr[i][j]='.';
                }
            }
    if(n%2==0) {
        if(k<=n/2) {
            for(int i=0;i<n;i+=2) {
                if(k>0) {
                arr[i][i]='R';
                }
                k--;
            }

            for(int i=0;i<n;i++) {
                for(int j=0;j<n;j++) {
                    cout << arr[i][j];
                }
                cout << endl;
            }

        }
        else {
            cout << -1 << endl;
        }
    }
    else {
        if(k<=(n+1)/2) {
            for(int i=0;i<n;i+=2) {
                if(k>0) {
                arr[i][i]='R';
                }
                k--;
            }

            for(int i=0;i<n;i++) {
                for(int j=0;j<n;j++) {
                    cout << arr[i][j];
                }
                cout << endl;
            }

        }
        else {
            cout << -1 << endl;
        }
    }
}
 
 
 
int main() {
    int t=1;
    cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}