#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
 
 int countOperations(int num1, int num2) {
     int count =0;
    while(num1>0 && num2>0) {
        if(num1>=num2) {
            num1-=num2;
        } else {
            num2-=num1;
        }
        count++;
    }
    return count;
}
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << countOperations(2,3);
    return 0;
}