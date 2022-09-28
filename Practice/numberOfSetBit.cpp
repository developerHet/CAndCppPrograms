#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
 
int numberOfSetBit(int n) {
    
    int count = 0;
    /*
    while(n!=0) {
        if((n&1)!=0) {
            count++;
        }
        n>>=1;
    }
    */
   while(n!=0) {
       count++;
       n&=n-1;
   }
    return count;
}
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << numberOfSetBit(8);
    return 0;
}