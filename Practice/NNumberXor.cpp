#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
int nNumberXor(int n) {
    if(n%4==1) {
        return 1;
    } else if(n%4==2) {
        return n+1;
    } else if(n%4==3) {
        return 0;
    } else if(n%4==0) {
        return n;
    }
}
 
 
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << nNumberXor(5);
    return 0;
}