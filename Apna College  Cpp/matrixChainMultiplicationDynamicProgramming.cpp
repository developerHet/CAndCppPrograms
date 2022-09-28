#include <bits/stdc++.h>
using namespace std;

//using Memoization
const int N=102, MOD=1e3+5;
int dp[N][N];
int a[N];
int mcm(int i,int j) {
    if(i==j) {
        return 0;
    }

    if(dp[i][j]!=-1) {
        return dp[i][j];
    }

    dp[i][j] = MOD;
    for(int k=i;k<j;k++) {
        dp[i][j] = min(dp[i][j], mcm(i,k) + mcm(k+1,j) + (a[i-1]*a[k]*a[j]));
    }
    return dp[i][j];
}


int main() {
    int n;
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    cout << mcm(1,n-1);
    return 0;
}

// Using Tabulation
/*
int main() {
    int n;
    cin >> n;
    int a[n];
    int m[n][n];
    int s[n][n];
    int curr,min,j;

    for(int i=0;i<n;i++) {
        cin >> a[i];
    }

    for(int i=0;i<n;i++) {
        m[i][i]=0;
    }

    for(int d=1;d<n-1;d++) {
        for(int i=1;i<n-d;i++) {
            j=i+d;
            min=INT_MAX;
            
            for(int k=i;k<=j-1;k++) {
                curr = m[i][k] + m[k+1][j] + (a[i-1]*a[k]*a[j]);
                if(curr<min) {
                    min = curr;
                    s[i][j]=k;
                }
            }
            m[i][j]=min;
        }
    }

    cout << m[1][n-1];

    return 0;
}
*/
