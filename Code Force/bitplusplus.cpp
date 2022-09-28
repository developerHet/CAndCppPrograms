#include <iostream>
using namespace std;

int main() {
    int n,ans=0;
    cin >> n;
    string s[n];
    for(int i=0;i<n;i++) {
        cin >> s[i];
    }
    for(int i=0;i<n;i++) {
        if(s[i][0]=='+' || s[i][s[i].length()-1] == '+') {
            ans++;
        }
        else {
            ans--;
        }
    }
    cout << ans  << endl;
    return 0;
}