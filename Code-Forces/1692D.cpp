#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 

bool isPalindrome(string s) {
    int i=0;
    int j = s.length()-1;
    while(i<=j) {
        if(s[i]!=s[j]) return false;
        i++;
        j--;
    }
    return true;
}

int hr;
int mi; 
void conevertDigit(string s) {
    hr = 0;
    mi = 0;
    bool h = true;
    for(auto x: s) {
        if(x==':') h = false;
        else if(h) hr = (hr*10)+(x-'0');
        else mi = (mi*10)+(x-'0');
    }
} 

int addTime(int m) {
    int t=0;
    int ans = 0;
    while(1) {
        t+=m;
        mi+=m;
        hr+=mi/60;
        mi%=60;
        hr%=24;
        string s;
        if(hr<10) s+="0";
        s+=to_string(hr);
        s+=":";
        if(mi<10) s+="0";
        s+=to_string(mi);
        if(isPalindrome(s))ans++;
        if(t%1440==0) break;
    }
    return ans;
}
 
void solve() {
    string s;
    cin >> s;
    int m;
    cin >> m;
    conevertDigit(s);
    cout << addTime(m) << endl;
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