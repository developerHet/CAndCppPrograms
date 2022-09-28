#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
int minimumTime(string s) {
    int n = s.length();
    vector<int> v;
    for(int i=0;i<n;i++) {
        if(s[i]=='0') {
            v.push_back(-1);
        } else {
            v.push_back(1);
        }
    }
    int sum = 0;
    int mini = 0;
    for(int i=0;i<n;i++) {
        sum+=v[i];
        mini = min(sum,mini);
        if(sum>0) sum=0;
    }
    return n+mini;
}
 
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s = "0010";
    cout << minimumTime(s);
    return 0;
}