#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
 
 
void solve() {
    int n;
    cin >> n;
    n--;
    string s;
    cin >> s;
    int cnt=1;
   
   for(int i=0;i<n-2;i++) {
       if(s[i]=='1' && s[i+1]=='0') {
           cnt++;
       }
   }
    cout << cnt << endl;
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