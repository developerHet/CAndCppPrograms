#include <bits/stdc++.h>
using namespace std;
#define ll long long
 

int checKEvenorOdd(int n) {
    int sum=0;
    while(n>0) {
        sum+=n%10;
        n=n/10;
    }
    return sum%2;
}
 
void solve() {
    int n;
    cin >> n;
    if(checKEvenorOdd(n)==0) {
        if(checKEvenorOdd(n+1)==1) {
            cout << n+1 << endl;
        }
        else {
            cout << n+2 << endl;
        }
    } else
    {
        if(checKEvenorOdd(n+1)==0) {
            cout << n+1 << endl;
        }
        else {
            cout << n+2 << endl;
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