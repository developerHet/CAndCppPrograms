#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 
 
 
void solve() {
   int n;
   cin >> n;
   char a[n];
   int b[n];
   vector<int> c(n,0);
   bool flag = true;
   for(int i=0;i<n;i++) {
        cin >> a[i];
        b[i] = (int)a[i]-48;
        if(i==0 && b[i]==9) flag = false;
   }

   if(flag) {
        for(int i=0;i<n;i++) {
            cout << 9-b[i];
        } 
   } else {
        c[n-2]=1;
        c[0]=11;
        c[n-1]=1;
        
    for(int i=n-1;i>0;i--) {
        if(c[i]>=b[i]){c[i]=c[i]-b[i];}
        else {
            c[i]=c[i]-b[i]+10;
            c[i-1]--;
        }
    }
    c[0]=c[0]-9;

    for(int i=0;i<n;i++) cout << c[i];
   } cout << endl;
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