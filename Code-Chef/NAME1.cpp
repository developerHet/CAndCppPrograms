#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    string a,b;
    cin >> a >> b;
    string x = a+b;
    string y = "";
    int n;
    cin >> n;
    for(int i=0;i<n;i++) {
        string m;
        cin >> m;
        y+=m;
    }
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    int i=0;
    int j=0;
    while(i<x.length() && j<y.length()) {
        if(x[i]==y[j]) {
            j++;
        }
        i++;
    }
    if(j==y.length()) {
        cout << "YES" << endl;
    } else cout<< "NO" << endl;
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