#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    int l=0;
    int r=n-1;
    int count=0;
    while(l<=r) {
        if(str[l]!=str[r]) {
            count++;
        }
        l++;
        r--;
    }
    if(count%2==0) {
        cout <<  count/2 << endl;
    } else {
        cout << count/2+1 << endl;
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