#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
 


long long smallestNumber(long long num) {
    string s = to_string(abs(num));
    if(num>=0) sort(s.begin(),s.end());
    else sort(s.begin(),s.end(),greater<char>());

    if(num>0) {
        int idx = s.find_first_not_of('0');
        swap(s[0],s[idx]);
    }
     long long ans = stoll(s);
     if(num<0) ans*=-1;

     return ans; 
}
 
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << smallestNumber(-7065);
    return 0;
}