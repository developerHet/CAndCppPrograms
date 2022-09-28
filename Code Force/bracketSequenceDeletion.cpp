#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    int c=0,r=0;
    for(int i=0;i<n;) {
        if(str[i]=='('){
            if(i==n-1) {
                r++;
                i++;
            } else {
                i+=2;
                c++;
            }
        } else {
            bool flag = false;
            for(int j=i+1;j<n;j++) {
                if(str[j]==')'){
                    i=j+1;
                    c++;
                    flag=true;
                    break;
                }
            }
            if(flag==false) {
                r=n-i;
                break;
            }
        }
    }
    cout << c << " " << r << endl;
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