#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
 
 
void solve() {
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    int wCnt= 0;
    int l = 0;
    int r = 0;
    while(r<k) {
        if(s[r]=='W') wCnt++;
        r++;
    }
  
    int mini = wCnt;
    while(r<n) {
        if(s[r]=='W') wCnt++;
        if(s[l]=='W') wCnt--;
        l++;
        r++;
        mini = min(wCnt,mini);
    }
    cout << mini << endl;
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