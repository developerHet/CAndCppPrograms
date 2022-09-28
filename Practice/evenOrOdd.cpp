#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
 

bool evenOrOdd(int n) {
    if((n&1)==0) {
        return true;
    } else {
        return false;
    }
}
 
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if(evenOrOdd(111)) {
        cout << "even";
    } else {
        cout << "odd";
    }
    return 0;
}