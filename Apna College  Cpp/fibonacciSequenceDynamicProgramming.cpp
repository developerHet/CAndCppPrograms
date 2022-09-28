#include <bits/stdc++.h>
using namespace std;

//using Memoization
/*
const int N = 1e5+3;
int dp[N];

int fib(int n) {
    if(n==0 || n==1) {
        return n;
    }
    if(dp[n] != -1) {
        return dp[n];
    }
    return dp[n]=fib(n-1)+fib(n-2);
}

int main(){
    int n;
    cin >> n;
    for(int i=0;i<N;i++) {
        dp[i]=-1;
    }
    cout << fib(n);
    return 0;
}
*/

// Using Tabulation

int main() {
    int n;
    cin >> n;
    int fib[n+1];
    fib[0]=0;
    fib[1]=1;
    fib[2]=1;
    for(int i=3;i<=n;i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    cout << fib[n];
    return 0;
}