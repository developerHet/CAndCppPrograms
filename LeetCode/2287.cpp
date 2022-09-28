#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
 
int rearrangeCharacters(string s, string target) {
    map<char,int> mp;
    map<char,int> main;
    int mn = INT_MAX;
    int n = s.length();
    for(int i=0;i<n;i++) {
        main[s[i]]++;
    }
    for(int i=0;i<target.length();i++) {
        mp[target[i]]++;
    }
    for(int i=0;i<target.length();i++) {
        int x = main[target[i]]/mp[target[i]];
        if(x<mn) {
            mn=x;
        }
    }
    
    return mn;
}
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << rearrangeCharacters("ilovecodingonleetcode","code");
    return 0;
}