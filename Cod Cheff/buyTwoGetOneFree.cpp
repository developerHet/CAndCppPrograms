#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    int n,x;
    cin >> n >> x;
    int amount=0;
    int itemCount=0;
    while(n>0){
        amount+=x;
        itemCount++;
        n--;
        if(itemCount==2){
            n--;
            itemCount=0;
        }
    }
    cout << amount << endl;
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