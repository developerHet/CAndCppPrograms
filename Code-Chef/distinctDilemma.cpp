#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    int n;
    cin >> n;
    int sum=0;
    for(int i=0;i<n;i++) {
        int x;
        cin >> x;
        sum+=x;
    }
    int count=0;
    int sub=1;
    while(sum-sub>=0) {
        count++;
        sum-=sub;
        sub++;
    }
    cout << count << endl;
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