#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 


 
void solve() {
    int n;
    cin >> n;
    priority_queue<int> q1,q2;

    for(int i=0;i<n;i++) {
        int x;
        cin >> x;
        q1.push(x);
    }

    for(int i=0;i<n;i++) {
        int x;
        cin >> x;
        q2.push(x);
    }

    int ans = 0;
    while(!q1.empty() && !q2.empty()) {
        int x = q1.top();
        int y = q2.top();
        if(x==y) {
            q1.pop();
            q2.pop();
        } else if(x>y) {
            q1.pop();
            ans++;
            q1.push(log10(x)+1);
        } else {
            q2.pop();
            ans++;
            q2.push(log10(y)+1);
        }
    }
    cout << ans  << endl;
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