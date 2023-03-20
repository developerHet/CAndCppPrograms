#include <bits/stdc++.h>
using namespace std;

 
 


void solve() {
    set<char> specialChar{'c','g','l','r'};
    const unsigned int M = 1000000007;
    int n;
    cin >> n;
    string s;
    cin >> s;
    int countSpecial=1;
   
    
    for(int i=0;i<n;i++) {
        if(specialChar.find(s[i])!=specialChar.end()) {
            countSpecial=(countSpecial*2)%M;
        }
    }
    cout << countSpecial%M << endl;

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