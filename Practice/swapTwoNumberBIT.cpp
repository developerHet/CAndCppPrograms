#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
 

void swapTwoNum(int a,int b) {
    a = a^b;
    b = a^b;
    a = a^b;
    cout << a << " " << b;
}
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a=5,b=6;
    swapTwoNum(5,6);
    return 0;
}