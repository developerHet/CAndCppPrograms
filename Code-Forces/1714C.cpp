#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
 
 
void solve() {
    int n;
    cin >> n;
    int ans = 0;
    for(int i=9;i>=1;i--) {
        if((n-i)>=0) {
            ans = (ans*10)+i;
            n-=i;
        }
    }
    string str = to_string(ans);
    reverse(str.begin(),str.end());
    cout << str << endl;
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