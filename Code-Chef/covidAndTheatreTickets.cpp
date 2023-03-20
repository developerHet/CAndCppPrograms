#include <bits/stdc++.h>
using namespace std;
 
 
void solve() {
 int n,k;
 cin >> n >> k;
 if(n%2==0) {
     if(k%2==0) {
         n/=2;
         k/=2;
     }
     else {
         n/=2;
         k=(k+1)/2;
     }
 }
 else {
     if(k%2==0) {
         n=(n+1)/2;
         k/=2;
     }
     else {
         n=(n+1)/2;;
         k=(k+1)/2;
     }
 }
 cout << n*k << endl;
}
 
 
 
int main() {
    int t;
    cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}