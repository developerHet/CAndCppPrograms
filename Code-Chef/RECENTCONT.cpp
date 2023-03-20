#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    int n;
    cin >> n;
    string str[n];
    int count1 = 0;
    int count2 = 0;
    for(int i=0;i<n;i++) {
        cin >> str[i];
        if(str[i]=="START38") {
            count1++;
        } else {
            count2++;
        }
    }
    cout << count1 << " " << count2  << endl;
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