#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int k,n,m;
    cin >> k >> n >> m;
    int mul=0;
    for(int i=1;i<=m;i++) {
        mul=mul+(i*k);
    }
    if(mul-n >= 0) {
        cout << mul-n << endl;
    }
    else {
        cout << 0 << endl;
    }
    return 0;
}