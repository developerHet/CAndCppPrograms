#include <bits/stdc++.h>
using namespace std;
#define long long ll
 

int countBit(int n) {
    int count = 0;
    while (n) {
        n &= (n - 1);
        count++;
    }
    return count;
}

void solve() {
    int n;
    cin >> n;
    vector<int> v;
    int i=1;
    while(v.size()<n) {
        int x=i;
        if(countBit(i)%2==0) {
            v.push_back(i);
        }
        i++;
    }
    for(int j=0;j<v.size();j++) {
        cout << v[j] << " ";
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