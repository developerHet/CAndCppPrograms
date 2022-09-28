#include <bits/stdc++.h>
using namespace std;


const int N=1e3+2;

int main() {
    int n;
    cin >> n;
    int a[n],jumps[n];
    for(int i=0;i<n;i++) {
        cin >> a[i];
        jumps[i]=N;
    }
    jumps[0]=0;
    for(int i=1;i<n;i++) {
        for(int j=0;j<i;j++) {
            if(i-j<=a[j]) {
                jumps[i] = min(jumps[i],1+jumps[j]);
                break;
            }
        }
    }
    cout << jumps[n-1];
    return 0;
}