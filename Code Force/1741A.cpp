#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    map<char,int> mp;
    mp['S']=1;mp['M']=2;mp['L']=3;

    string a,b;
    cin >> a >> b;
    int n1 = a.length();
    int n2 = b.length();

    if(mp[a[n1-1]]>mp[b[n2-1]]) {
        cout << ">" << endl;
    } else if(mp[a[n1-1]]<mp[b[n2-1]]) {
        cout << "<" << endl;
    } else if(mp[a[n1-1]]==mp[b[n2-1]]) {
        if(a[n1-1]=='M') {
            cout << "=" << endl;
        } else if(a[n1-1]=='S') {
            if(n1<n2) {
                cout << ">" << endl;
            } else if(n1>n2) {
                cout << "<" << endl;
            } else {
                cout << "=" << endl;
            }
        } else if(a[n1-1]=='L') {
            if(n1<n2) {
                cout << "<" << endl;
            } else if(n1>n2) {
                cout << ">" << endl;
            } else {
                cout << "=" << endl;
            }
        }
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